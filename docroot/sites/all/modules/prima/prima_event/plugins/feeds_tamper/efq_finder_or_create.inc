<?php

/**
 * @file
 * Map arbitrary values to entity ids or creates entity if not exists.
 */

$plugin = array(
  'form' => 'feeds_tamper_efq_finder_or_create_form',
  'callback' => 'feeds_tamper_efq_finder_or_create_callback',
  'validate' => 'feeds_tamper_efq_finder_or_create_validate',
  'name' => 'Entity Field Query finder or create',
  'multi' => 'loop',
  'category' => 'Other',
);

/**
 * Custom callback to build form fields.
 */
function ajax_add_mapping_field_callback($form, &$form_state)
{
  return isset($form['plugin']['settings']['mapping_fields']) ? $form['plugin']['settings']['mapping_fields'] : $form['settings']['mapping_fields'];
}

/**
 * Custom callback to build form fields.
 */
function ajax_remove_mapping_field_callback($form, &$form_state)
{
  return isset($form['plugin']['settings']['mapping_fields']) ? $form['plugin']['settings']['mapping_fields'] : $form['settings']['mapping_fields'];
}

/**
 * Configuration form.
 */
function feeds_tamper_efq_finder_or_create_form($importer, $element_key, array $settings, array &$form_state) {
  $form = array(
    '#prefix' => '<div id="feeds-tamper-efq-finder-wrapper">',
    '#suffix' => '</div>',
  );

  $source_field = _feeds_tamper_efq_finder_or_create_get_value('source_field', $form_state, $settings);
  $form['source_field'] = array(
    '#type' => 'textfield',
    '#title' => t('Use value from another mapping source field.'),
    '#default_value' => $source_field,
    '#description' => 'If left blank, current source (set in "Mapping" will be used).',
  );

  // Get some info on entities and bundles.
  $entity_types = array();
  foreach (entity_get_info() as $machine_name => $info) {
    $entity_types[$machine_name] = check_plain($info['label']);
  }

  $entity_type = _feeds_tamper_efq_finder_or_create_get_value('entity_type', $form_state, $settings);
  $form['update'] = array(
    '#type' => 'submit',
    '#submit' => array('feeds_tamper_efq_finder_or_create_form_submit'),
    '#value' => t('Update'),
    '#attributes' => array('class' => array('no-js')),
  );

  $form['entity_type'] = array(
    '#type' => 'select',
    '#title' => t('Entity type'),
    '#options' => $entity_types,
    '#default_value' => $entity_type,
    '#ajax' => array(
      'callback' => 'feeds_tamper_efq_finder_or_create_ajax',
      'wrapper' => 'feeds-tamper-efq-finder-wrapper',
    ),
    '#required' => TRUE,
  );

  if (!$entity_type) {
    return $form;
  }

  // Gather bundle information.
  $entity_info = entity_get_info($entity_type);
  $bundles = array();
  foreach ($entity_info['bundles'] as $machine_name => $info) {
    $bundles[$machine_name] = check_plain($info['label']);
  }

  $bundle = _feeds_tamper_efq_finder_or_create_get_value('bundle', $form_state, $settings);
  $bundle = isset($bundles[$bundle]) ? $bundle : NULL;

  $form['bundle'] = array(
    '#type' => 'select',
    '#title' => t('Bundle'),
    '#options' => $bundles,
    '#default_value' => $bundle,
    '#ajax' => array(
      'callback' => 'feeds_tamper_efq_finder_or_create_ajax',
      'wrapper' => 'feeds-tamper-efq-finder-wrapper',
    ),
    '#empty_option' => t('-- Select --'),
  );

  // Gather field definitions.
  $fields = array();
  foreach ($entity_info['schema_fields_sql']['base table'] as $property) {
    $fields[$property] = $property;
  }
  if ($bundle) {
    foreach (field_info_instances($entity_type, $bundle) as $machine_name => $info) {
      $fields[$machine_name] = check_plain($info['label']);
    }
  }
  else {
    foreach (field_info_instances($entity_type) as $bundle_instances) {
      foreach ($bundle_instances as $machine_name => $info) {
        $fields[$machine_name] = check_plain($info['label']);
      }
    }
  }

  $field = _feeds_tamper_efq_finder_or_create_get_value('field', $form_state, $settings);
  $field = isset($fields[$field]) ? $field : NULL;

  $form['field'] = array(
    '#type' => 'select',
    '#title' => t('Field'),
    '#options' => $fields,
    '#default_value' => $field,
    '#ajax' => array(
      'callback' => 'feeds_tamper_efq_finder_or_create_ajax',
      'wrapper' => 'feeds-tamper-efq-finder-wrapper',
    ),
    '#required' => TRUE,
  );

  $number = 0;
  $addTextbox = FALSE;
  $removeTextbox = FALSE;

  $form['mapping_fields'] = array
  (
    '#type' => 'container',
    '#tree' => true,
    '#prefix' => '<div id="mapping-fields-wrapper">',
    '#suffix' => '</div>',
  );

  if (array_key_exists('triggering_element', $form_state) &&
    array_key_exists('#value', $form_state['triggering_element']) &&
    $form_state['triggering_element']['#value'] == t('Add mapping')
  ) {
    $addTextbox = TRUE;
  }


  if (array_key_exists('triggering_element', $form_state) &&
    array_key_exists('#value', $form_state['triggering_element']) &&
    $form_state['triggering_element']['#value'] == t('Remove mapping')
  ) {
    $addTextbox = FALSE;
    $removeTextbox = TRUE;
  }

  $mapping_fields = _feeds_tamper_efq_finder_or_create_get_value('mapping_fields', $form_state, $settings);
  if ($mapping_fields)
  {
    foreach ($mapping_fields as $element) {
      if($removeTextbox && $number == $form_state['triggering_element']['#id']){
        unset($form_state['values']['settings']['mapping_fields'][$number]);
      }else{
        $form['mapping_fields'][$number] = array(
          '#type' => 'fieldset',
          '#tree' => true,
          '#title'=> 'Mapping',
        );

        $form['mapping_fields'][$number]['field'] = array(
          '#type'  => 'textfield',
          '#title' => 'Mapping Field',
          '#default_value' => $element['field'],
        );
        $form['mapping_fields'][$number]['entity'] = array(
          '#type'  => 'textfield',
          '#title' => 'Entity Field',
          '#default_value' => $element['entity'],
        );

        $form['mapping_fields'][$number]['remove'] = array(
          '#type' => 'button',
          '#name' => t('Remove mapping') . ' ' . rand(1,100) . time(),
          '#id' => $number,
          '#ajax' => array(
            'callback' => array('ajax_remove_mapping_field_callback'),
            'wrapper'  => 'mapping-fields-wrapper',
            'method'  => 'replace',
          ),
          '#value' => t('Remove mapping'),
        );
      }
      $number++;
    }
  }
  if ($addTextbox) {
    $form['mapping_fields'][$number] = array(
      '#type' => 'fieldset',
      '#tree' => true,
      '#title'=> 'Mapping',
    );
    $form['mapping_fields'][$number]['field'] = array(
      '#type'  => 'textfield',
      '#title' => 'Mapping Field',
    );
    $form['mapping_fields'][$number]['entity'] = array(
      '#type'  => 'textfield',
      '#title' => 'Entity Field',
    );

    $form['mapping_fields'][$number]['remove'] = array(
      '#type' => 'button',
      '#name' => t('Remove mapping') . ' ' . ' ' . rand(1,100) . time(),
      '#id' => $number,
      '#ajax' => array(
        'callback' => 'ajax_remove_mapping_field_callback',
        'wrapper'  => 'mapping-fields-wrapper',
        'method'  => 'replace',
      ),
      '#value' => t('Remove mapping'),
    );

  }

  $form['add_button'] = array(
    '#type' => 'button',
    '#name' => t('Add mapping'),
    '#ajax' => array(
      'callback' => 'ajax_add_mapping_field_callback',
      'wrapper'  => 'mapping-fields-wrapper',
      'method'  => 'replace',
    ),
    '#value' => t('Add mapping'),
  );

  if (!$field || in_array($field, $entity_info['schema_fields_sql']['base table'])) {
    return $form;
  }

  $field_info = field_info_field($field);
  $columns = array();
  foreach (array_keys($field_info['columns']) as $column) {
    $columns[$column] = $column;
  }

  $column = _feeds_tamper_efq_finder_or_create_get_value('column', $form_state, $settings);
  $column = isset($columns[$column]) ? $column : key($columns);

  $form['column'] = array(
    '#type' => 'select',
    '#title' => t('Column'),
    '#options' => $columns,
    '#default_value' => $column,
    '#required' => TRUE,
  );

  return $form;
}

/**
 * Searches for the correct form value.
 */
function _feeds_tamper_efq_finder_or_create_get_value($key, array $form_state, array $settings) {
  if (!empty($form_state['values']['settings'][$key])) {
    return $form_state['values']['settings'][$key];
  }

  if (!empty($settings[$key])) {
    return $settings[$key];
  }
}

/**
 * Validation handler for feeds_tamper_efq_finder_form().
 */
function feeds_tamper_efq_finder_or_create_validate(array &$settings) {
  $entity_info = entity_get_info($settings['entity_type']);
  $settings['property'] = in_array($settings['field'], $entity_info['schema_fields_sql']['base table']);
}

/**
 * Ajax callback for form changes.
 */
function feeds_tamper_efq_finder_or_create_ajax(array $form, array &$form_state) {
  return isset($form['plugin']['settings']) ? $form['plugin']['settings'] : $form['settings'];
}

/**
 * Sets an entity id based on the value of a field.
 */
function feeds_tamper_efq_finder_or_create_callback($result, $item_key, $element_key, &$field, array $settings) {

  if(isset($settings['source_field']) &&
    !empty($settings['source_field']) &&
    isset($result->items[$item_key][drupal_strtolower($settings['source_field'])]) &&
    !empty($result->items[$item_key][drupal_strtolower($settings['source_field'])])
  ){
    $field = $result->items[$item_key][drupal_strtolower($settings['source_field'])];
  }
  $query = new EntityFieldQuery();

  $query->entityCondition('entity_type', $settings['entity_type']);
  if ($settings['bundle']) {
    $query->entityCondition('bundle', $settings['bundle']);
  }

  if ($settings['property']) {
    $query->propertyCondition($settings['field'], $field);
  }
  else {
    $query->fieldCondition($settings['field'], $settings['column'], $field);
  }
  $query->range(0, 1);

  $query_result = $query->execute();

  // @todo: Implement choice of behavior when multiple entities are found.
  // Currently we only use the first.
  if (!empty($query_result)) {
    $result = reset($query_result);
    $field = key($result);
  }
  else {

    // We didn't find a value, Create the item.
    $entity_type = $settings['entity_type'];
    $entity = entity_create($entity_type, array('type' => $settings['bundle']));
    $wrapper = entity_metadata_wrapper($entity_type, $entity);
    if ($settings['property']) {
      $wrapper->$settings['field']->set($field);
    }

    $bundle_fields = field_info_instances($entity_type,  $settings['bundle']);

    $main_fields = array();

    if(isset($settings['mapping_fields'])){
      foreach($settings['mapping_fields'] as $mapping_field){
        if(isset($result->items[$item_key][strtolower($mapping_field['field'])])){
          if(array_key_exists($mapping_field['entity'],$bundle_fields)){
            //Set the data directly
            $wrapper->$mapping_field['entity']->set($result->items[$item_key][drupal_strtolower($mapping_field['field'])]);
           }else{
            //Split the data
            list($main_field,$sub_field) = explode(':',$mapping_field['entity']);
            $main_fields[$main_field][$sub_field] = $result->items[$item_key][drupal_strtolower($mapping_field['field'])];
            }
          }
      }
    }

    $wrapper->save();

    $query = new EntityFieldQuery();

    $query->entityCondition('entity_type', $settings['entity_type']);
    if ($settings['bundle']) {
      $query->entityCondition('bundle', $settings['bundle']);
    }

    if ($settings['property']) {
      $query->propertyCondition($settings['field'], $field);
    }
    else {
      $query->fieldCondition($settings['field'], $settings['column'], $field);
    }
    $query->range(0, 1);

    $query_result = $query->execute();

    // @todo: Implement choice of behavior when multiple entities are found.
    // Currently we only use the first.
    if (!empty($query_result)) {
      $result = reset($query_result);
      $field = key($result);

      if($settings['entity_type'] == 'node'){
        $node = node_load($field);
        if($main_fields){
          foreach($main_fields as $key => $value){
            $subfields = array();
            foreach($value as $k=>$v){
              $subfields[$k] = $v;
            }
            $node->{$key}[LANGUAGE_NONE][] = $subfields;
          }
        }
        node_save($node);
      }
    }
    else {
      // We didn't find a value, remove the item.
      // @todo Fallback.
      unset($result->items[$item_key][$element_key]);
    }
  }
}


/**
 * Add plugin form submit handler.
 */
function feeds_tamper_efq_finder_or_create_form_submit($form, &$form_state) {
  if ($form_state['triggering_element']['#value'] == t('Add')) {
    $obj = feeds_tamper_new_instance();
    $obj->plugin_id = $form_state['values']['plugin_id'];
    if (isset($form_state['values']['settings'])) {
      $obj->settings = $form_state['values']['settings'];
    }
    $obj->importer = $form_state['importer']->id;

    $obj->source = $form_state['source'];
    $obj->description = $form_state['values']['description'];
    $obj->id = $form_state['values']['id'];

    feeds_tamper_save_instance($obj);
    $form_state['redirect'] = 'admin/structure/feeds/' . $obj->importer . '/tamper';
    $source_name = feeds_tamper_ui_source_name($obj);
    drupal_set_message(t('Plugin %description was successfully added to %source.', array('%description' => $obj->description, '%source' => $source_name)));
    return;
  }
  $form_state['rebuild'] = TRUE;
}
