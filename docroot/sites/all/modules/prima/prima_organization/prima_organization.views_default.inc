<?php
/**
 * @file
 * prima_organization.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function prima_organization_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'organizations';
  $view->description = 'List of all the organizations.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Organizations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Organizations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'datatables';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_address' => 'field_address',
    'field_organization_type' => 'field_organization_type',
    'field_website' => 'field_website',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_address' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_organization_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_website' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['elements'] = array(
    'search_box' => 1,
    'table_info' => 1,
    'save_state' => 0,
    'table_tools' => 0,
  );
  $handler->display->display_options['style_options']['layout'] = array(
    'autowidth' => 0,
    'themeroller' => 0,
    'sdom' => '',
  );
  $handler->display->display_options['style_options']['pages'] = array(
    'pagination_style' => '0',
    'length_change' => 0,
    'display_length' => '10',
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Address */
  $handler->display->display_options['fields']['field_address']['id'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address']['field'] = 'field_address';
  $handler->display->display_options['fields']['field_address']['alter']['text'] = '[field_address-country]';
  $handler->display->display_options['fields']['field_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_address']['settings'] = array(
    'use_widget_handlers' => 0,
    'format_handlers' => array(
      'address' => 'address',
      'address-hide-postal-code' => 'address-hide-postal-code',
      'address-hide-street' => 'address-hide-street',
    ),
  );
  /* Field: Content: Organization type */
  $handler->display->display_options['fields']['field_organization_type']['id'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['table'] = 'field_data_field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['field'] = 'field_organization_type';
  $handler->display->display_options['fields']['field_organization_type']['label'] = 'Category';
  $handler->display->display_options['fields']['field_organization_type']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_website']['id'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['table'] = 'field_data_field_website';
  $handler->display->display_options['fields']['field_website']['field'] = 'field_website';
  $handler->display->display_options['fields']['field_website']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_website']['type'] = 'link_url';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'organization' => 'organization',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'organizations';
  $export['organizations'] = $view;

  return $export;
}
