<?php
/**
 * @file
 * prima_registration.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function prima_registration_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = '4prima_event_registration_import';
  $feeds_importer->config = array(
    'name' => '4Prima event registration import',
    'description' => '4Prima event registration import',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'delete_uploaded_file' => 1,
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'encoding' => 'UTF-8',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsEntityProcessorRegistration',
      'config' => array(
        'values' => array(
          'registration_id' => '',
          'entity_id' => '120',
          'entity_type' => 'event',
          'anon_mail' => '',
          'count' => '',
          'state' => 'complete',
          'created' => NULL,
          'updated' => NULL,
          'entity' => array(
            'entity_type' => 'node',
            'entity_id' => '98',
          ),
          'author' => '',
          'user' => array(
            'entity_type' => '',
            'entity_id' => '',
          ),
        ),
        'authorize' => TRUE,
        'mappings' => array(
          0 => array(
            'source' => 'Email',
            'target' => 'anon_mail',
            'unique' => FALSE,
            'language' => 'und',
          ),
          1 => array(
            'source' => 'Contact name',
            'target' => 'field_reg_contact_name',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Title of contact',
            'target' => 'field_reg_title_of_contact',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Email',
            'target' => 'anon_mail',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Organization',
            'target' => 'field_reg_organization:etid',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Position',
            'target' => 'field_reg_position',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Department / Unit',
            'target' => 'field_reg_department_uni',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Mobile phone',
            'target' => 'field_reg_mobile_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Office phone',
            'target' => 'field_office_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Address',
            'target' => 'field_reg_address:data',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Field of work',
            'target' => 'field_reg_field_of_work',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'News and calls from PRIMA',
            'target' => 'field_reg_news_and_calls',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'prima_event_registration',
        'language' => 'und',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['4prima_event_registration_import'] = $feeds_importer;

  return $export;
}
