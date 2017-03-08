<?php

/**
 * @file
 * Ensure a field has unique value, otherwise item will be skipped.
 */

$plugin = array(
  'form' => 'feeds_tamper_unique_field_form',
  'callback' => 'feeds_tamper_unique_field__callback',
  'name' => 'Unique Field',
  'multi' => 'loop',
  'category' => 'Other',
);

function feeds_tamper_unique_field_form($importer, $element_key, $settings) {
  $form = array();
  $form['unique']['#markup'] = t('If the field is not unique - the item entire item will be skipped.');
  return $form;
}

function feeds_tamper_unique_field__callback($result, $item_key, $element_key, &$field, $settings, $source) {
  $config = $source->importer()->getConfig();
  $query = db_select('registration', 'r')
    ->condition('entity_id', $config['processor']['config']['values']['entity']['entity_id'])
    ->condition('entity_type', $config['processor']['config']['values']['entity']['entity_type'])
    ->condition('anon_mail', $field);
  $count = $query->countQuery()->execute()->fetchField();
  if($count > 0) unset($result->items[$item_key]);
}
