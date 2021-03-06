<?php

/**
 * @file
 * Hide the street address fields.
 */

$plugin = array(
  'title' => t('Hide city'),
  'format callback' => 'addressfield_format_address_hide_city',
  'type' => 'address',
  'weight' => -85,
);

/**
 * Format callback.
 *
 * @see CALLBACK_addressfield_format_callback()
 */
function addressfield_format_address_hide_city(&$format, $address, $context = array()) {
  if (isset($format['street_block'])) {
    $format['street_block']['#access'] = FALSE;
  }

  if (isset($format['locality_block'])) {
    $format['locality_block']['#access'] = FALSE;
  }
}
