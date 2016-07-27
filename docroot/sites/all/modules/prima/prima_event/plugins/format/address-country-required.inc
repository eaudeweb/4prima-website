<?php

/**
 * @file
 * Make all fields optional.
 * Allows users to save incomplete addresses, bypassing validation.
 */

$plugin = array(
  'title' => t('Make all fields optional except City and Country (No validation - unsuitable for postal purposes)'),
  'format callback' => 'prima_event_addressfield_format_partial_address',
  'type' => 'address',
  'weight' => 100,
);

/**
 * Format callback.
 */
function prima_event_addressfield_format_partial_address(&$format, $address, $context = array()) {
  if (isset($format['name_block'])) {
    if (isset($format['name_block']['name_line'])) {
      $format['name_block']['name_line']['#required'] = FALSE;
    }
    elseif (isset($format['name_block']['first_name'])) {
      $format['name_block']['first_name']['#required'] = FALSE;
      $format['name_block']['last_name']['#required'] = FALSE;
    }
  }

  $format['street_block']['thoroughfare']['#required'] = FALSE;
  $format['locality_block']['postal_code']['#required'] = FALSE;
  $format['locality_block']['dependent_locality']['#required'] = FALSE;
  $format['locality_block']['locality']['#required'] = TRUE;
  $format['locality_block']['administrative_area']['#required'] = FALSE;
}
