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
    'no_blocks' => 0,
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
          0 => 1,
          1 => 5,
          2 => 6,
        ),
        'parent' => 'canvas',
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
          1 => 'latest_tweets',
        ),
        'parent' => 'main',
        'class' => '',
        'hide_empty' => 1,
      ),
      'upcomming_events' => array(
        'type' => 'region',
        'title' => 'Upcomming events',
        'width' => '70.08996462245274',
        'width_type' => '%',
        'parent' => '6',
        'class' => '',
        'hide_empty' => 1,
      ),
      'latest_tweets' => array(
        'type' => 'region',
        'title' => 'Latest tweets',
        'width' => '29.91003537754726',
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
      'latest_tweets' => NULL,
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
    $pane->pid = 'new-8b3377f3-c00c-40b4-957b-e4a102c98e49';
    $pane->panel = 'latest_news';
    $pane->type = 'views';
    $pane->subtype = 'news';
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
      'override_title_text' => 'Latest news',
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
    $pane->uuid = '8b3377f3-c00c-40b4-957b-e4a102c98e49';
    $display->content['new-8b3377f3-c00c-40b4-957b-e4a102c98e49'] = $pane;
    $display->panels['latest_news'][0] = 'new-8b3377f3-c00c-40b4-957b-e4a102c98e49';
    $pane = new stdClass();
    $pane->pid = 'new-8b700256-3995-4e32-a91e-52450bb3428a';
    $pane->panel = 'latest_tweets';
    $pane->type = 'views';
    $pane->subtype = 'public_calendar';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '0',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Calendar of events',
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
    $pane->uuid = '8b700256-3995-4e32-a91e-52450bb3428a';
    $display->content['new-8b700256-3995-4e32-a91e-52450bb3428a'] = $pane;
    $display->panels['latest_tweets'][0] = 'new-8b700256-3995-4e32-a91e-52450bb3428a';
    $pane = new stdClass();
    $pane->pid = 'new-b04ec33e-c22b-4337-ae67-88c052b82aa7';
    $pane->panel = 'latest_tweets';
    $pane->type = 'block';
    $pane->subtype = 'twitter_block-1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Latest tweets',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'b04ec33e-c22b-4337-ae67-88c052b82aa7';
    $display->content['new-b04ec33e-c22b-4337-ae67-88c052b82aa7'] = $pane;
    $display->panels['latest_tweets'][1] = 'new-b04ec33e-c22b-4337-ae67-88c052b82aa7';
    $pane = new stdClass();
    $pane->pid = 'new-cf6213e9-8ea3-4897-ab79-9d48a1863ae0';
    $pane->panel = 'upcomming_events';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '3',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_events',
      'override_title' => 1,
      'override_title_text' => '%title',
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
    $pane->uuid = 'cf6213e9-8ea3-4897-ab79-9d48a1863ae0';
    $display->content['new-cf6213e9-8ea3-4897-ab79-9d48a1863ae0'] = $pane;
    $display->panels['upcomming_events'][0] = 'new-cf6213e9-8ea3-4897-ab79-9d48a1863ae0';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front_page'] = $page;

  return $pages;

}
