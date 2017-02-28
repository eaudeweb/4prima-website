<?php
/**
 * @file
 * prima_registration.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function prima_registration_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'administer_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Administer registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Administer registrations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'registration_id' => 'registration_id',
    'field_reg_contact_name' => 'field_reg_contact_name',
    'created' => 'created',
    'delete_registration' => 'delete_registration',
    'edit_registration' => 'edit_registration',
    'field_reg_organization' => 'field_reg_organization',
    'field_reg_title_of_contact' => 'field_reg_title_of_contact',
    'view_registration' => 'view_registration',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'registration_id' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_contact_name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'delete_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_organization' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_reg_title_of_contact' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_registration' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Registration: Registration ID */
  $handler->display->display_options['fields']['registration_id']['id'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['table'] = 'registration';
  $handler->display->display_options['fields']['registration_id']['field'] = 'registration_id';
  $handler->display->display_options['fields']['registration_id']['exclude'] = TRUE;
  /* Field: Registration: Title of contact */
  $handler->display->display_options['fields']['field_reg_title_of_contact']['id'] = 'field_reg_title_of_contact';
  $handler->display->display_options['fields']['field_reg_title_of_contact']['table'] = 'field_data_field_reg_title_of_contact';
  $handler->display->display_options['fields']['field_reg_title_of_contact']['field'] = 'field_reg_title_of_contact';
  $handler->display->display_options['fields']['field_reg_title_of_contact']['label'] = 'Title';
  $handler->display->display_options['fields']['field_reg_title_of_contact']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Registration: Contact name */
  $handler->display->display_options['fields']['field_reg_contact_name']['id'] = 'field_reg_contact_name';
  $handler->display->display_options['fields']['field_reg_contact_name']['table'] = 'field_data_field_reg_contact_name';
  $handler->display->display_options['fields']['field_reg_contact_name']['field'] = 'field_reg_contact_name';
  /* Field: Registration: Organization */
  $handler->display->display_options['fields']['field_reg_organization']['id'] = 'field_reg_organization';
  $handler->display->display_options['fields']['field_reg_organization']['table'] = 'field_data_field_reg_organization';
  $handler->display->display_options['fields']['field_reg_organization']['field'] = 'field_reg_organization';
  $handler->display->display_options['fields']['field_reg_organization']['settings'] = array(
    'link' => 1,
  );
  /* Field: Registration: Date created */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'registration';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'long';
  /* Field: Registration: Delete link */
  $handler->display->display_options['fields']['delete_registration']['id'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['delete_registration']['field'] = 'delete_registration';
  $handler->display->display_options['fields']['delete_registration']['label'] = '';
  $handler->display->display_options['fields']['delete_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['delete_registration']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['delete_registration']['text'] = 'Delete';
  /* Field: Registration: Edit link */
  $handler->display->display_options['fields']['edit_registration']['id'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['edit_registration']['field'] = 'edit_registration';
  $handler->display->display_options['fields']['edit_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['edit_registration']['text'] = 'Edit';
  /* Field: Registration: View link */
  $handler->display->display_options['fields']['view_registration']['id'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['table'] = 'registration';
  $handler->display->display_options['fields']['view_registration']['field'] = 'view_registration';
  $handler->display->display_options['fields']['view_registration']['exclude'] = TRUE;
  $handler->display->display_options['fields']['view_registration']['text'] = 'View';
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Actions';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[view_registration]&nbsp;&nbsp;[edit_registration]&nbsp;&nbsp;[delete_registration]';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/registrations';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Administrate registrations';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['administer_registrations'] = $view;

  $view = new view();
  $view->name = 'event_registrations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'registration';
  $view->human_name = 'Event Registrations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer registration';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Registration: Contact name */
  $handler->display->display_options['fields']['field_reg_contact_name']['id'] = 'field_reg_contact_name';
  $handler->display->display_options['fields']['field_reg_contact_name']['table'] = 'field_data_field_reg_contact_name';
  $handler->display->display_options['fields']['field_reg_contact_name']['field'] = 'field_reg_contact_name';
  /* Field: Registration: Title of contact */
  $handler->display->display_options['fields']['field_reg_title_of_contact']['id'] = 'field_reg_title_of_contact';
  $handler->display->display_options['fields']['field_reg_title_of_contact']['table'] = 'field_data_field_reg_title_of_contact';
  $handler->display->display_options['fields']['field_reg_title_of_contact']['field'] = 'field_reg_title_of_contact';
  /* Field: Registration: Anonymous e-mail */
  $handler->display->display_options['fields']['anon_mail']['id'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['table'] = 'registration';
  $handler->display->display_options['fields']['anon_mail']['field'] = 'anon_mail';
  $handler->display->display_options['fields']['anon_mail']['label'] = 'Email';
  /* Field: Registration: Position */
  $handler->display->display_options['fields']['field_reg_position']['id'] = 'field_reg_position';
  $handler->display->display_options['fields']['field_reg_position']['table'] = 'field_data_field_reg_position';
  $handler->display->display_options['fields']['field_reg_position']['field'] = 'field_reg_position';
  /* Field: Registration: Organization */
  $handler->display->display_options['fields']['field_reg_organization']['id'] = 'field_reg_organization';
  $handler->display->display_options['fields']['field_reg_organization']['table'] = 'field_data_field_reg_organization';
  $handler->display->display_options['fields']['field_reg_organization']['field'] = 'field_reg_organization';
  $handler->display->display_options['fields']['field_reg_organization']['settings'] = array(
    'link' => 0,
  );
  /* Field: Registration: Department / Unit */
  $handler->display->display_options['fields']['field_reg_department_uni']['id'] = 'field_reg_department_uni';
  $handler->display->display_options['fields']['field_reg_department_uni']['table'] = 'field_data_field_reg_department_uni';
  $handler->display->display_options['fields']['field_reg_department_uni']['field'] = 'field_reg_department_uni';
  /* Field: Registration: Mobile phone */
  $handler->display->display_options['fields']['field_reg_mobile_phone']['id'] = 'field_reg_mobile_phone';
  $handler->display->display_options['fields']['field_reg_mobile_phone']['table'] = 'field_data_field_reg_mobile_phone';
  $handler->display->display_options['fields']['field_reg_mobile_phone']['field'] = 'field_reg_mobile_phone';
  /* Field: Registration: Office phone */
  $handler->display->display_options['fields']['field_office_phone']['id'] = 'field_office_phone';
  $handler->display->display_options['fields']['field_office_phone']['table'] = 'field_data_field_office_phone';
  $handler->display->display_options['fields']['field_office_phone']['field'] = 'field_office_phone';
  /* Field: Registration: Address */
  $handler->display->display_options['fields']['field_reg_address']['id'] = 'field_reg_address';
  $handler->display->display_options['fields']['field_reg_address']['table'] = 'field_data_field_reg_address';
  $handler->display->display_options['fields']['field_reg_address']['field'] = 'field_reg_address';
  $handler->display->display_options['fields']['field_reg_address']['click_sort_column'] = 'country';
  $handler->display->display_options['fields']['field_reg_address']['settings'] = array(
    'use_widget_handlers' => 1,
    'format_handlers' => array(
      'address' => 'address',
    ),
  );
  /* Field: Registration: Field of work */
  $handler->display->display_options['fields']['field_reg_field_of_work']['id'] = 'field_reg_field_of_work';
  $handler->display->display_options['fields']['field_reg_field_of_work']['table'] = 'field_data_field_reg_field_of_work';
  $handler->display->display_options['fields']['field_reg_field_of_work']['field'] = 'field_reg_field_of_work';
  /* Field: Registration: News and calls from PRIMA */
  $handler->display->display_options['fields']['field_reg_news_and_calls']['id'] = 'field_reg_news_and_calls';
  $handler->display->display_options['fields']['field_reg_news_and_calls']['table'] = 'field_data_field_reg_news_and_calls';
  $handler->display->display_options['fields']['field_reg_news_and_calls']['field'] = 'field_reg_news_and_calls';
  /* Contextual filter: Registration: Host entity ID */
  $handler->display->display_options['arguments']['entity_id']['id'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['table'] = 'registration';
  $handler->display->display_options['arguments']['entity_id']['field'] = 'entity_id';
  $handler->display->display_options['arguments']['entity_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['entity_id']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['entity_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['entity_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['entity_id']['summary_options']['items_per_page'] = '25';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'registrations-%1-title-%timestamp-full.csv';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['newline_token'] = '1';
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['style_options']['keep_html'] = 0;
  $handler->display->display_options['path'] = 'node/%/registrations/export';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
  );
  $export['event_registrations'] = $view;

  return $export;
}
