<?php
/**
 * @file
 * prima_organization.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function prima_organization_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_organization_type'.
  $field_bases['field_organization_type'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_organization_type',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'type_of_organization',
          'parent' => 0,
        ),
      ),
      'options_list_callback' => 'title_taxonomy_allowed_values',
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
