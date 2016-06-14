<?php
/**
 * @file
 * prima_slider.features.inc
 */

/**
 * Implements hook_views_api().
 */
function prima_slider_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function prima_slider_image_default_styles() {
  $styles = array();

  // Exported image style: slide.
  $styles['slide'] = array(
    'label' => 'Slide (1920x595)',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1920,
          'height' => 595,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function prima_slider_node_info() {
  $items = array(
    'slide' => array(
      'name' => t('Slide'),
      'base' => 'node_content',
      'description' => t('Custom content type used for homepage slider.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
