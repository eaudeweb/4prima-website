<?php
/**
 * @file
 * prima_meeting.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function prima_meeting_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_meetings_docs'.
  $field_bases['field_meetings_docs'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_meetings_docs',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'file',
    'settings' => array(
      'display_default' => 1,
      'display_field' => 1,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'file',
  );

  return $field_bases;
}
