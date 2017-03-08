<?php
/**
 * @file
 * prima_organization.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function prima_organization_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = '4prima_organizations_import';
  $feeds_importer->config = array(
    'name' => '4Prima organizations import',
    'description' => '4Prima organizations import',
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
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Organization name',
            'target' => 'title_field',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Organization type',
            'target' => 'field_organization_type',
            'unique' => FALSE,
            'language' => 'und',
          ),
          2 => array(
            'source' => 'Organization description',
            'target' => 'body',
            'unique' => FALSE,
            'language' => 'und',
          ),
          3 => array(
            'source' => 'Organization country',
            'target' => 'field_address:country',
            'unique' => FALSE,
            'language' => 'und',
          ),
          4 => array(
            'source' => 'Organization address 1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
            'language' => 'und',
          ),
          5 => array(
            'source' => 'Organization address 2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
            'language' => 'und',
          ),
          6 => array(
            'source' => 'Organization postal code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
            'language' => 'und',
          ),
          7 => array(
            'source' => 'Organization city',
            'target' => 'field_address:locality',
            'unique' => FALSE,
            'language' => 'und',
          ),
          8 => array(
            'source' => 'Organization state / province',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
            'language' => 'und',
          ),
          9 => array(
            'source' => 'Organization website title',
            'target' => 'field_website:title',
            'unique' => FALSE,
            'language' => 'und',
          ),
          10 => array(
            'source' => 'Organization website url',
            'target' => 'field_website:url',
            'unique' => FALSE,
            'language' => 'und',
          ),
          11 => array(
            'source' => 'Organization general e-mail',
            'target' => 'field_email',
            'unique' => FALSE,
            'language' => 'und',
          ),
          12 => array(
            'source' => 'Organization phone',
            'target' => 'field_phone',
            'unique' => FALSE,
            'language' => 'und',
          ),
        ),
        'insert_new' => '1',
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'organization',
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
  $export['4prima_organizations_import'] = $feeds_importer;

  return $export;
}
