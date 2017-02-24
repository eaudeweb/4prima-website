<?php
/**
 * @file
 * prima_registration.features.inc
 */

/**
 * Implements hook_default_registration_type().
 */
function prima_registration_default_registration_type() {
  $items = array();
  $items['prima_event_registration'] = entity_import('registration_type', '{
    "name" : "prima_event_registration",
    "label" : "4Prima event registration",
    "locked" : "0",
    "default_state" : "complete",
    "weight" : "0",
    "rdf_mapping" : [],
    "data" : { "held_expire" : "0", "held_expire_state" : "canceled" }
  }');
  return $items;
}
