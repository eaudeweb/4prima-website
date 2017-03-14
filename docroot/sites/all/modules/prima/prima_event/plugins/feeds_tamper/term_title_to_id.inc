<?php

/**
 * @file
 * This tamper process will take a string and return an id, eg
 * Given a term title, return the term id.
 *
 */

$plugin = array(
  'form' => 'feeds_tamper_term_title_to_id_form',
  'callback' => 'feeds_tamper_term_title_to_id_callback',
  'name' => 'Convert term title into term ID',
  'multi' => 'direct',
  'category' => 'Other',
  'default description' => 'Convert term title into term ID',
);

/**
 * Configuration form.
 */
function feeds_tamper_term_title_to_id_form($importer, $element_key, array $settings, array &$form_state) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Converts this field from a term name string to the term id, if exists.'),
  );
  $taxonomy_term_machine_name = _feeds_tamper_province_to_code_get_value('taxonomy_term_machine_name', $form_state, $settings);
  $form['taxonomy_term_machine_name'] = array(
    '#type' => 'textfield',
    '#title' => t('Taxonomy term machine name to look for'),
    '#default_value' => $taxonomy_term_machine_name,
    '#required' => TRUE,
  );
  return $form;
}

/**
 * Field callback.
 */
function feeds_tamper_term_title_to_id_callback($result, $item_key, $element_key, &$field, $settings, $source) {
  $query = db_select('taxonomy_term_data', 'td');
  $query->join('taxonomy_vocabulary', 'tv', 'td.vid = tv.vid');
  $query->condition('tv.machine_name', $settings['taxonomy_term_machine_name']);
  $query->fields('td',array('tid','name'));
  $result = $query->execute();
  $term_values = $result->fetchAll();
  $terms = array();
  if($term_values){
    foreach($term_values as $term_value){
      $terms[$term_value->name] = $term_value->tid;
    }
  }
  if(array_key_exists($field,$terms)){
    $field = $terms[$field];
  }else{
    $field = '';
  }
}
