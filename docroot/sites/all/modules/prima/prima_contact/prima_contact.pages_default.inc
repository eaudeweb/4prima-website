<?php
/**
 * @file
 * prima_contact.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function prima_contact_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contact_us';
  $page->task = 'page';
  $page->admin_title = 'Contact us';
  $page->admin_description = 'Contact us custom page.';
  $page->path = 'contact';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_contact_us__panel';
  $handler->task = 'page';
  $handler->subtask = 'contact_us';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Contact us',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
          1 => 'newsletter',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Contact form',
        'width' => '69.28956762554226',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'introduction_text',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'introduction_text' => array(
        'type' => 'region',
        'title' => 'Introduction text',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      'newsletter' => array(
        'type' => 'region',
        'title' => 'Newsletter',
        'width' => '30.710432374457735',
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'introduction_text' => NULL,
      'newsletter' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Contact us';
  $display->uuid = '3f36a44c-7bdf-4124-95ea-78e24b5c3bb2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0bd04e74-51c6-46ee-ae5a-25790eb508b6';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'webform-client-block-22';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0bd04e74-51c6-46ee-ae5a-25790eb508b6';
    $display->content['new-0bd04e74-51c6-46ee-ae5a-25790eb508b6'] = $pane;
    $display->panels['center'][0] = 'new-0bd04e74-51c6-46ee-ae5a-25790eb508b6';
    $pane = new stdClass();
    $pane->pid = 'new-41654ae3-85de-4e0b-a59f-c6242bdcef2a';
    $pane->panel = 'introduction_text';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '23',
      'links' => 0,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '41654ae3-85de-4e0b-a59f-c6242bdcef2a';
    $display->content['new-41654ae3-85de-4e0b-a59f-c6242bdcef2a'] = $pane;
    $display->panels['introduction_text'][0] = 'new-41654ae3-85de-4e0b-a59f-c6242bdcef2a';
    $pane = new stdClass();
    $pane->pid = 'new-2a252804-77ea-4b74-8b52-bd439807350b';
    $pane->panel = 'newsletter';
    $pane->type = 'block';
    $pane->subtype = 'simplenews-10';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '4Prima newsletter',
      'override_title_heading' => 'h3',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2a252804-77ea-4b74-8b52-bd439807350b';
    $display->content['new-2a252804-77ea-4b74-8b52-bd439807350b'] = $pane;
    $display->panels['newsletter'][0] = 'new-2a252804-77ea-4b74-8b52-bd439807350b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-41654ae3-85de-4e0b-a59f-c6242bdcef2a';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contact_us'] = $page;

  return $pages;

}
