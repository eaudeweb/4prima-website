<?php
/**
 * @file
 * prima_registration.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function prima_registration_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer own prima_event_registration registration'.
  $permissions['administer own prima_event_registration registration'] = array(
    'name' => 'administer own prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer prima_event_registration registration'.
  $permissions['administer prima_event_registration registration'] = array(
    'name' => 'administer prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'clear 4prima_event_registration_import feeds'.
  $permissions['clear 4prima_event_registration_import feeds'] = array(
    'name' => 'clear 4prima_event_registration_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'create prima_event_registration registration'.
  $permissions['create prima_event_registration registration'] = array(
    'name' => 'create prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create prima_event_registration registration other anonymous'.
  $permissions['create prima_event_registration registration other anonymous'] = array(
    'name' => 'create prima_event_registration registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create prima_event_registration registration other users'.
  $permissions['create prima_event_registration registration other users'] = array(
    'name' => 'create prima_event_registration registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create prima_event_registration registration self'.
  $permissions['create prima_event_registration registration self'] = array(
    'name' => 'create prima_event_registration registration self',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any prima_event_registration registration'.
  $permissions['delete any prima_event_registration registration'] = array(
    'name' => 'delete any prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own prima_event_registration registration'.
  $permissions['delete own prima_event_registration registration'] = array(
    'name' => 'delete own prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit prima_event_registration registration state'.
  $permissions['edit prima_event_registration registration state'] = array(
    'name' => 'edit prima_event_registration registration state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'import 4prima_event_registration_import feeds'.
  $permissions['import 4prima_event_registration_import feeds'] = array(
    'name' => 'import 4prima_event_registration_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'tamper 4prima_event_registration_import'.
  $permissions['tamper 4prima_event_registration_import'] = array(
    'name' => 'tamper 4prima_event_registration_import',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unlock 4prima_event_registration_import feeds'.
  $permissions['unlock 4prima_event_registration_import feeds'] = array(
    'name' => 'unlock 4prima_event_registration_import feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'update any prima_event_registration registration'.
  $permissions['update any prima_event_registration registration'] = array(
    'name' => 'update any prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own prima_event_registration registration'.
  $permissions['update own prima_event_registration registration'] = array(
    'name' => 'update own prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own prima_event_registration registration'.
  $permissions['view own prima_event_registration registration'] = array(
    'name' => 'view own prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view prima_event_registration registration'.
  $permissions['view prima_event_registration registration'] = array(
    'name' => 'view prima_event_registration registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
