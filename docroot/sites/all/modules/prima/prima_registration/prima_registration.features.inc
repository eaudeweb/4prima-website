<?php
/**
 * @file
 * prima_registration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prima_registration_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function prima_registration_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_registration_state().
 */
function prima_registration_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "0",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['held'] = entity_import('registration_state', '{
    "name" : "held",
    "label" : "Held",
    "description" : "Registration is held.",
    "default_state" : "0",
    "active" : "0",
    "held" : "1",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "1",
    "active" : "1",
    "held" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function prima_registration_default_registration_type() {
  $items = array();
  $items['prima_event_registration'] = entity_import('registration_type', '{
    "name" : "prima_event_registration",
    "label" : "4Prima event registration",
    "locked" : "0",
    "default_state" : "pending",
    "weight" : "0",
    "rdf_mapping" : [],
    "data" : { "held_expire" : "0", "held_expire_state" : "canceled" }
  }');
  return $items;
}
