<?php
/**
 * @file
 * The primary PHP file for this theme.
 */

/**
 * Preprocess variables for page template.
 */
function prima_preprocess_page(&$vars) {

  /**
   * insert variables into page template.
   */
  if($vars['page']['sidebar_first'] && $vars['page']['sidebar_second']) {
    $vars['sidebar_grid_class'] = 'col-md-3';
    $vars['main_grid_class'] = 'col-md-6';
  } elseif ($vars['page']['sidebar_first'] || $vars['page']['sidebar_second']) {
    $vars['sidebar_grid_class'] = 'col-md-4';
    $vars['main_grid_class'] = 'col-md-8';
  } else {
    $vars['main_grid_class'] = 'col-md-12';
  }

  if($vars['page']['header_top_left'] && $vars['page']['header_top_right']) {
    $vars['header_top_left_grid_class'] = 'col-md-8';
    $vars['header_top_right_grid_class'] = 'col-md-4';
  } elseif ($vars['page']['header_top_right'] || $vars['page']['header_top_left']) {
    $vars['header_top_left_grid_class'] = 'col-md-12';
    $vars['header_top_right_grid_class'] = 'col-md-12';
  }
}

/**
 * Search block form alter.
 */
function prima_form_alter(&$form, &$form_state, $form_id) {
  if ($form_id == 'search_block_form') {
    unset($form['search_block_form']['#title']);
    $form['search_block_form']['#title_display'] = 'invisible';
    $form_default = t('Search this website...');
    $form['search_block_form']['#default_value'] = $form_default;

    $form['actions']['submit']['#attributes']['value'][] = '';

    $form['search_block_form']['#attributes'] = array('onblur' => "if (this.value == '') {this.value = '{$form_default}';}", 'onfocus' => "if (this.value == '{$form_default}') {this.value = '';}" );
  }
}