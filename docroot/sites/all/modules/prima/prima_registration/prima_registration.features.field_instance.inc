<?php
/**
 * @file
 * prima_registration.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function prima_registration_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'registration-prima_event_registration-field_office_phone'.
  $field_instances['registration-prima_event_registration-field_office_phone'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_office_phone',
    'label' => 'Office phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_address'.
  $field_instances['registration-prima_event_registration-field_reg_address'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'addressfield',
        'settings' => array(
          'format_handlers' => array(
            0 => 'address',
          ),
          'use_widget_handlers' => 1,
        ),
        'type' => 'addressfield_default',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_address',
    'label' => 'Address',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'addressfield',
      'settings' => array(
        'available_countries' => array(),
        'default_country' => 'site_default',
        'format_handlers' => array(
          'address' => 'address',
          'address-hide-postal-code' => 0,
          'address-hide-street' => 0,
          'address-hide-country' => 0,
          'organisation' => 0,
          'name-full' => 0,
          'name-oneline' => 0,
          'address-optional' => 0,
          'address-country-required' => 0,
        ),
      ),
      'type' => 'addressfield_standard',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_contact_name'.
  $field_instances['registration-prima_event_registration-field_reg_contact_name'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_contact_name',
    'label' => 'Contact name',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_department_uni'.
  $field_instances['registration-prima_event_registration-field_reg_department_uni'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_department_uni',
    'label' => 'Department / Unit',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_field_of_work'.
  $field_instances['registration-prima_event_registration-field_reg_field_of_work'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_field_of_work',
    'label' => 'Field of work',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_mobile_phone'.
  $field_instances['registration-prima_event_registration-field_reg_mobile_phone'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_mobile_phone',
    'label' => 'Mobile phone',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_news_and_calls'.
  $field_instances['registration-prima_event_registration-field_reg_news_and_calls'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_news_and_calls',
    'label' => 'News and calls from PRIMA',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 10,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_organization'.
  $field_instances['registration-prima_event_registration-field_reg_organization'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_organization',
    'label' => 'Organization',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_position'.
  $field_instances['registration-prima_event_registration-field_reg_position'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_position',
    'label' => 'Position',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance:
  // 'registration-prima_event_registration-field_reg_title_of_contact'.
  $field_instances['registration-prima_event_registration-field_reg_title_of_contact'] = array(
    'bundle' => 'prima_event_registration',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'registration',
    'field_name' => 'field_reg_title_of_contact',
    'label' => 'Title of contact',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Address');
  t('Contact name');
  t('Department / Unit');
  t('Field of work');
  t('Mobile phone');
  t('News and calls from PRIMA');
  t('Office phone');
  t('Organization');
  t('Position');
  t('Title of contact');

  return $field_instances;
}
