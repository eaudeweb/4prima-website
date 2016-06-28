<?php
/**
 * @file
 * prima_document.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prima_document_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function prima_document_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function prima_document_node_info() {
  $items = array(
    'document' => array(
      'name' => t('Document'),
      'base' => 'node_content',
      'description' => t('Document - custom content type used for contractual documents, templates and deliverables.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
