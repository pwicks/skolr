<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function skolr_user_default_permissions() {
  $permissions = array();

  // Exported permission: create meeting content
  $permissions['create meeting content'] = array(
    'name' => 'create meeting content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'meeting organizer',
    ),
  );

  // Exported permission: create poster content
  $permissions['create poster content'] = array(
    'name' => 'create poster content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'poster presenter',
    ),
  );

  // Exported permission: delete own meeting content
  $permissions['delete own meeting content'] = array(
    'name' => 'delete own meeting content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'meeting organizer',
    ),
  );

  // Exported permission: delete own poster content
  $permissions['delete own poster content'] = array(
    'name' => 'delete own poster content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'poster presenter',
    ),
  );

  // Exported permission: edit own meeting content
  $permissions['edit own meeting content'] = array(
    'name' => 'edit own meeting content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'meeting organizer',
    ),
  );

  // Exported permission: edit own poster content
  $permissions['edit own poster content'] = array(
    'name' => 'edit own poster content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'poster presenter',
    ),
  );

  // Exported permission: override poster published option
  $permissions['override poster published option'] = array(
    'name' => 'override poster published option',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'poster presenter',
    ),
  );

  return $permissions;
}
