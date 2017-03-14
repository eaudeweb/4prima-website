<?php
/**
 * @file
 * prima_organization.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function prima_organization_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_organizations_import-organization_country-country_to_code';
  $feeds_tamper->importer = '4prima_organizations_import';
  $feeds_tamper->source = 'Organization country';
  $feeds_tamper->plugin_id = 'country_to_code';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert country to ISO code';
  $export['4prima_organizations_import-organization_country-country_to_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_organizations_import-organization_state___province-province_to_code';
  $feeds_tamper->importer = '4prima_organizations_import';
  $feeds_tamper->source = 'Organization state / province';
  $feeds_tamper->plugin_id = 'province_to_code';
  $feeds_tamper->settings = array(
    'country' => 'Organization country',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert Province to ISO code';
  $export['4prima_organizations_import-organization_state___province-province_to_code'] = $feeds_tamper;

  return $export;
}
