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
  $feeds_tamper->id = '4prima_event_registration_import-_-efq_finder_or_create';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = ' ';
  $feeds_tamper->plugin_id = 'efq_finder_or_create';
  $feeds_tamper->settings = array(
    'source_field' => 'Organization name',
    'update' => 'Update',
    'entity_type' => 'node',
    'bundle' => 'organization',
    'field' => 'title',
    'mapping_fields' => array(
      0 => array(
        'field' => 'Organization type',
        'entity' => 'field_organization_type',
        'remove' => 'Remove mapping',
      ),
      1 => array(
        'field' => 'Organization description',
        'entity' => 'body:value',
        'remove' => 'Remove mapping',
      ),
      2 => array(
        'field' => 'Organization country',
        'entity' => 'field_address:country',
        'remove' => 'Remove mapping',
      ),
      3 => array(
        'field' => 'Organization address 1',
        'entity' => 'field_address:thoroughfare',
        'remove' => 'Remove mapping',
      ),
      4 => array(
        'field' => 'Organization address 2',
        'entity' => 'field_address:premise',
        'remove' => 'Remove mapping',
      ),
      5 => array(
        'field' => 'Organization postal code',
        'entity' => 'field_address:postal_code',
        'remove' => 'Remove mapping',
      ),
      6 => array(
        'field' => 'Organization city',
        'entity' => 'field_address:locality',
        'remove' => 'Remove mapping',
      ),
      7 => array(
        'field' => 'Organization state / province',
        'entity' => 'field_address:administrative_area',
        'remove' => 'Remove mapping',
      ),
      8 => array(
        'field' => 'Organization website title',
        'entity' => 'field_website:title',
        'remove' => 'Remove mapping',
      ),
      9 => array(
        'field' => 'Organization website url',
        'entity' => 'field_website:url',
        'remove' => 'Remove mapping',
      ),
      10 => array(
        'field' => 'Organization general e-mail',
        'entity' => 'field_email:email',
        'remove' => 'Remove mapping',
      ),
      11 => array(
        'field' => 'Organization phone',
        'entity' => 'field_phone:value',
        'remove' => 'Remove mapping',
      ),
    ),
    'add_button' => 'Add mapping',
    'property' => TRUE,
  );
  $feeds_tamper->weight = 4;
  $feeds_tamper->description = 'Entity Field Query finder or create';
  $export['4prima_event_registration_import-_-efq_finder_or_create'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-_-string2id';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = ' ';
  $feeds_tamper->plugin_id = 'string2id';
  $feeds_tamper->settings = array(
    'method' => 'autocomplete',
    'autocomplete' => array(
      'entity_type' => NULL,
      'field_name' => 'field_reg_organization',
      'bundle_name' => 'prima_event_registration',
    ),
    'views' => array(
      'view' => 'event_registrations:default',
    ),
  );
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Convert string into entity ID';
  $export['4prima_event_registration_import-_-string2id'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-_-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = ' ';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 2;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-_-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-contact_name-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Contact name';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-contact_name-trim'] = $feeds_tamper;

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
  $feeds_tamper->id = '4prima_event_registration_import-email-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 1;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-email-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-email-unique_field';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Email';
  $feeds_tamper->plugin_id = 'unique_field';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 3;
  $feeds_tamper->description = 'Unique Field';
  $export['4prima_event_registration_import-email-unique_field'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-mobile_phone-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Mobile phone';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-mobile_phone-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-office_phone-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Office phone';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-office_phone-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
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
  $feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
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

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_country-country_to_code';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization country';
  $feeds_tamper->plugin_id = 'country_to_code';
  $feeds_tamper->settings = array();
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert country to ISO code';
  $export['4prima_event_registration_import-organization_country-country_to_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_general_e-mail-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization general e-mail';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-organization_general_e-mail-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_name-efq_finder_or_create';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization name';
  $feeds_tamper->plugin_id = 'efq_finder_or_create';
  $feeds_tamper->settings = array(
    'update' => 'Update',
    'entity_type' => 'node',
    'bundle' => 'organization',
    'field' => 'title',
    'mapping_fields' => array(
      0 => array(
        'field' => 'Organization type',
        'entity' => 'field_organization_type',
        'remove' => 'Remove mapping',
      ),
      1 => array(
        'field' => 'Organization description',
        'entity' => 'body:value',
        'remove' => 'Remove mapping',
      ),
      2 => array(
        'field' => 'Organization country',
        'entity' => 'field_address:country',
        'remove' => 'Remove mapping',
      ),
      3 => array(
        'field' => 'Organization address 1',
        'entity' => 'field_address:thoroughfare',
        'remove' => 'Remove mapping',
      ),
      4 => array(
        'field' => 'Organization address 2',
        'entity' => 'field_address:premise',
        'remove' => 'Remove mapping',
      ),
      5 => array(
        'field' => 'Organization postal code',
        'entity' => 'field_address:postal_code',
        'remove' => 'Remove mapping',
      ),
      6 => array(
        'field' => 'Organization city',
        'entity' => 'field_address:locality',
        'remove' => 'Remove mapping',
      ),
      7 => array(
        'field' => 'Organization state / province',
        'entity' => 'field_address:administrative_area',
        'remove' => 'Remove mapping',
      ),
      8 => array(
        'field' => 'Organization website title',
        'entity' => 'field_website:title',
        'remove' => 'Remove mapping',
      ),
      9 => array(
        'field' => 'Organization website url',
        'entity' => 'field_website:url',
        'remove' => 'Remove mapping',
      ),
      10 => array(
        'field' => 'Organization general e-mail',
        'entity' => 'field_email:email',
        'remove' => 'Remove mapping',
      ),
      11 => array(
        'field' => 'Organization phone',
        'entity' => 'field_phone:value',
        'remove' => 'Remove mapping',
      ),
    ),
    'add_button' => 'Add mapping',
    'property' => TRUE,
  );
  $feeds_tamper->weight = 25;
  $feeds_tamper->description = 'Entity Field Query finder or create';
  $export['4prima_event_registration_import-organization_name-efq_finder_or_create'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = TRUE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_name-string2id';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization name';
  $feeds_tamper->plugin_id = 'string2id';
  $feeds_tamper->settings = array(
    'method' => 'autocomplete',
    'views' => array(
      'view' => 'event_registrations:default',
    ),
  );
  $feeds_tamper->weight = 24;
  $feeds_tamper->description = 'Convert string into entity ID';
  $export['4prima_event_registration_import-organization_name-string2id'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_name-trim';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization name';
  $feeds_tamper->plugin_id = 'trim';
  $feeds_tamper->settings = array(
    'mask' => '',
    'side' => 'trim',
  );
  $feeds_tamper->weight = 26;
  $feeds_tamper->description = 'Trim';
  $export['4prima_event_registration_import-organization_name-trim'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_state___province-province_to_code';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization state / province';
  $feeds_tamper->plugin_id = 'province_to_code';
  $feeds_tamper->settings = array(
    'country' => 'Organization country',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert Province to ISO code';
  $export['4prima_event_registration_import-organization_state___province-province_to_code'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-organization_type-term_title_to_id';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'Organization type';
  $feeds_tamper->plugin_id = 'term_title_to_id';
  $feeds_tamper->settings = array(
    'taxonomy_term_machine_name' => 'type_of_organization',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert term title into term ID';
  $export['4prima_event_registration_import-organization_type-term_title_to_id'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = '4prima_event_registration_import-state___province-province_to_code';
  $feeds_tamper->importer = '4prima_event_registration_import';
  $feeds_tamper->source = 'State / Province';
  $feeds_tamper->plugin_id = 'province_to_code';
  $feeds_tamper->settings = array(
    'country' => 'Organization country',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Convert Province to ISO code';
  $export['4prima_event_registration_import-state___province-province_to_code'] = $feeds_tamper;

  return $export;
}
