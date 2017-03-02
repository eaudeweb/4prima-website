<?php
/**
 * @file
 * prima_registration.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function prima_registration_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-country-country_to_code';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Country';
  $feeds_tamper->plugin_id = 'country_to_code';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert country to ISO code';
  $export['4prima_event_registration_import-country-country_to_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-email-unique_field';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'unique_field';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Unique Field';
  $export['4prima_event_registration_import-email-unique_field'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization-efq_finder_or_create';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization';
  $feeds_tamper->plugin_id = 'efq_finder_or_create';
  $feeds_tamper->settings = array(
    'update' => 'Update',
    'entity_type' => 'node',
    'bundle' => 'organization',
    'field' => 'title',
    'property' => TRUE,
  );
  $feeds_tamper->weight = 5;
  $feeds_tamper->description = 'Entity Field Query finder or create';
  $export['4prima_event_registration_import-organization-efq_finder_or_create'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization-string2id';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization';
  $feeds_tamper->plugin_id = 'string2id';
  $feeds_tamper->settings = array(
    'method' => 'autocomplete',
    'views' => array(
      'view' => 'event_registrations:default',
    ),
  );
  $feeds_tamper->weight = 6;
  $feeds_tamper->description = 'Convert string into entity ID';
  $export['4prima_event_registration_import-organization-string2id'] = $feeds_tamper;

  return $export;
}
