<?php

/**
 * @file
 * Convert a province name to ISO code.
 */

$plugin = array(
  'form' => 'feeds_tamper_province_to_code_form',
  'callback' => 'feeds_tamper_province_to_code_callback',
  'name' => 'Province to ISO code',
  'multi' => 'loop',
  'category' => 'Other',
  'default description' => 'Convert Province to ISO code',
);

function feeds_tamper_province_to_code_form($importer, $element_key, array $settings, array &$form_state) {
  $form = array();
  $form['help'] = array(
    '#markup' => t('Converts this field from a province name string to the two character ISO 3166-1 alpha-2 code.'),
  );

  $country = _feeds_tamper_province_to_code_get_value('country', $form_state, $settings);
  $form['country'] = array(
    '#type' => 'textfield',
    '#title' => t('Country mapping field'),
    '#default_value' => $country,
    '#required' => TRUE,
  );
  return $form;
}

function feeds_tamper_province_to_code_callback($result, $item_key, $element_key, &$field, $settings, $source) {


  /*include_once DRUPAL_ROOT . '/includes/locale.inc';
  static $countries = array();

  if (empty($countries)) {
    $countries = country_get_list();
    array_walk($countries, '_feeds_tamper_province_to_code_strtolower');
    $countries = array_flip($countries);
  }*/

  if(isset($result->items[$item_key][drupal_strtolower($settings['country'])])){
    module_load_include('inc','addressfield','addressfield.administrative_areas');
    $provinces = addressfield_get_administrative_areas($result->items[$item_key][drupal_strtolower($settings['country'])]);
    $provinces = array_flip($provinces);

    if (isset($provinces[$field])) {
      $field = $provinces[$field];
    }
    else {
      // If prvince name cannot be found, return nothing.
      $field = '';
    }
  }
}

/**
 * Callback for array_walk().
 */
function _feeds_tamper_province_to_code_strtolower(&$word) {
  $word = drupal_strtolower($word);
}

function _feeds_tamper_province_location_get_provinces($country = 'us') {
  $provinces = &drupal_static(__FUNCTION__, array());

  if (isset($provinces[$country])) {
    return $provinces[$country];
  }
  if ($cache = cache_get("provinces:$country", 'cache_location')) {
    $provinces[$country] = $cache->data;
    return $provinces[$country];
  }
}

/**
 * Searches for the correct form value.
 */
function _feeds_tamper_province_to_code_get_value($key, array $form_state, array $settings) {
  if (!empty($form_state['values']['settings'][$key])) {
    return $form_state['values']['settings'][$key];
  }

  if (!empty($settings[$key])) {
    return $settings[$key];
  }
}


