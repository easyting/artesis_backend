<?php
/**
 * @file
 * artesis_backend_permissions.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function artesis_backend_permissions_user_default_permissions() {
  $permissions = array();

  // Exported permission: alter color scheme.
  $permissions['alter color scheme'] = array(
    'name' => 'alter color scheme',
    'roles' => array(
      0 => 'administrator',
      1 => 'local administrator',
    ),
    'module' => 'artesis_backend',
  );

  // Exported permission: change alpha settings.
  $permissions['change alpha settings'] = array(
    'name' => 'change alpha settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'artesis_backend',
  );

  // Exported permission: change common theme settings.
  $permissions['change common theme settings'] = array(
    'name' => 'change common theme settings',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'artesis_backend',
  );

  return $permissions;
}
