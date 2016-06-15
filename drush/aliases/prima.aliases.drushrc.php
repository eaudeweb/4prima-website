<?php

$aliases['staging'] = array(
  'uri' => '4prima.edw.ro',
  'db-allows-remote' => TRUE,
  'remote-host' => '4prima.edw.ro',
  'remote-user' => 'php',
  'root' => '/var/www/html/4prima-website/docroot',
  'path-aliases' => array(
    '%files' => 'sites/default/files',
  ),
  'command-specific' => array(
    'sql-sync' => array(
      'simulate' => '1',
      'source-dump' => '/tmp/source-dump.sql',
    ),
  ),
);

// This alias is used in install and update scripts.
// Rewrite it in your aliases.local.php as you need.

// Example of local setting.
// $aliases['prima.local'] = array(
//   'uri' => 'dev.prima.localhost',
//   'root' => '/home/my_user/4prima-website/docroot',
// );

// Add your local aliases.
if (file_exists(dirname(__FILE__) . '/aliases.local.php')) {
  include dirname(__FILE__) . '/aliases.local.php';
}