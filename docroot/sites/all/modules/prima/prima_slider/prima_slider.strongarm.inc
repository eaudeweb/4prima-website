<?php
/**
 * @file
 * prima_slider.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function prima_slider_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_slide';
  $strongarm->value = 0;
  $export['comment_anonymous_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_slide';
  $strongarm->value = 1;
  $export['comment_default_mode_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_slide';
  $strongarm->value = '50';
  $export['comment_default_per_page_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_slide';
  $strongarm->value = 1;
  $export['comment_form_location_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_slide';
  $strongarm->value = '1';
  $export['comment_preview_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_slide';
  $strongarm->value = '1';
  $export['comment_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_slide';
  $strongarm->value = 1;
  $export['comment_subject_field_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_slide';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_slide';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_slide';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_slide';
  $strongarm->value = '1';
  $export['node_preview_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_slide';
  $strongarm->value = 0;
  $export['node_submitted_slide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_add_class_active_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_add_class_active_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_height_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_auto_height_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_auto_play_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = '5000';
  $export['owlcarousel_auto_play_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_base_class_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 'owl-carousel';
  $export['owlcarousel_base_class_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_drag_before_anim_finish_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_drag_before_anim_finish_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = array(
    0 => '1199',
    1 => 1,
  );
  $export['owlcarousel_items_desktop_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items';
  $strongarm->value = 1;
  $export['owlcarousel_items_desktop_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width';
  $strongarm->value = '1199';
  $export['owlcarousel_items_desktop_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = array(
    0 => '979',
    1 => 1,
  );
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items';
  $strongarm->value = 1;
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_desktop_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width';
  $strongarm->value = '979';
  $export['owlcarousel_items_desktop_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = array(
    0 => '479',
    1 => 1,
  );
  $export['owlcarousel_items_mobile_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items';
  $strongarm->value = 1;
  $export['owlcarousel_items_mobile_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_mobile_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width';
  $strongarm->value = '479';
  $export['owlcarousel_items_mobile_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 5;
  $export['owlcarousel_items_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_scale_up_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_items_scale_up_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = array(
    0 => '768',
    1 => 1,
  );
  $export['owlcarousel_items_tablet_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items';
  $strongarm->value = 1;
  $export['owlcarousel_items_tablet_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width';
  $strongarm->value = '768';
  $export['owlcarousel_items_tablet_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = array(
    0 => '0',
    1 => 0,
  );
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items';
  $strongarm->value = 0;
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_items_tablet_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width';
  $strongarm->value = '0';
  $export['owlcarousel_items_tablet_small_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_path_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_json_path_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_json_success_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_json_success_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_effect_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 'fadeIn';
  $export['owlcarousel_lazy_effect_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_follow_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_lazy_follow_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_lazy_load_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_lazy_load_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_mouse_drag_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_mouse_drag_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_navigation_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = array(
    0 => 'prev',
    1 => 'next',
  );
  $export['owlcarousel_navigation_text_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items';
  $strongarm->value = 'next';
  $export['owlcarousel_navigation_text_owlcarousel_settings_owlcarousel-settings-prima-slideshow_items'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_navigation_text_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width';
  $strongarm->value = 'prev';
  $export['owlcarousel_navigation_text_owlcarousel_settings_owlcarousel-settings-prima-slideshow_width'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_numbers_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_pagination_numbers_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_pagination_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_pagination_speed_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 800;
  $export['owlcarousel_pagination_speed_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_responsive_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_responsive_refresh_rate_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 200;
  $export['owlcarousel_responsive_refresh_rate_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_nav_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_rewind_nav_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_rewind_speed_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 1000;
  $export['owlcarousel_rewind_speed_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_scroll_per_page_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_scroll_per_page_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 'owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $export['owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_single_item_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_single_item_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_slide_speed_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 200;
  $export['owlcarousel_slide_speed_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_stop_on_hover_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_stop_on_hover_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_theme_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = 'owl-theme';
  $export['owlcarousel_theme_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_touch_drag_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = TRUE;
  $export['owlcarousel_touch_drag_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'owlcarousel_transition_style_owlcarousel_settings_owlcarousel-settings-prima-slideshow';
  $strongarm->value = FALSE;
  $export['owlcarousel_transition_style_owlcarousel_settings_owlcarousel-settings-prima-slideshow'] = $strongarm;

  return $export;
}
