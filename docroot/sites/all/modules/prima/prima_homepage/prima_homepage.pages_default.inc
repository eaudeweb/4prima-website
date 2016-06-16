<?php
/**
 * @file
 * prima_homepage.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function prima_homepage_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front_page';
  $page->task = 'page';
  $page->admin_title = 'Front page';
  $page->admin_description = 'Custom fornt page';
  $page->path = 'home';
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
  $handler->name = 'page_front_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'front_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front page',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
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
          0 => 'main-row',
          1 => 1,
          2 => 5,
          3 => 6,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Slider',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
        'hide_empty' => 1,
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => '4prima_short_description',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      '4prima_short_description' => array(
        'type' => 'region',
        'title' => '4Prima Short Description',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
        'hide_empty' => 1,
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'latest_news',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'latest_news' => array(
        'type' => 'region',
        'title' => 'Latest News',
        'width' => 100,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
        'hide_empty' => 1,
      ),
      6 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'upcomming_events',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'upcomming_events' => array(
        'type' => 'region',
        'title' => 'Upcomming events',
        'width' => 100,
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 1,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      '4prima_short_description' => NULL,
      'latest_news' => NULL,
      'upcomming_events' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'a2d6e86b-e247-4fd5-8cd1-241ea5c9ffac';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-40ee6492-fcf2-4e2e-bbc7-4114a0830827';
    $pane->panel = '4prima_short_description';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '6',
      'links' => 1,
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
    $pane->uuid = '40ee6492-fcf2-4e2e-bbc7-4114a0830827';
    $display->content['new-40ee6492-fcf2-4e2e-bbc7-4114a0830827'] = $pane;
    $display->panels['4prima_short_description'][0] = 'new-40ee6492-fcf2-4e2e-bbc7-4114a0830827';
    $pane = new stdClass();
    $pane->pid = 'new-a2b28bd0-ca13-428c-950c-029cb14e3e32';
    $pane->panel = 'center';
    $pane->type = 'views';
    $pane->subtype = 'slideshow';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '5',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
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
    $pane->uuid = 'a2b28bd0-ca13-428c-950c-029cb14e3e32';
    $display->content['new-a2b28bd0-ca13-428c-950c-029cb14e3e32'] = $pane;
    $display->panels['center'][0] = 'new-a2b28bd0-ca13-428c-950c-029cb14e3e32';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-a2b28bd0-ca13-428c-950c-029cb14e3e32';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}