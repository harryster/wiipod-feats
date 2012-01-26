<?php

/**
 * Implementation of hook_user_default_roles().
 */
function wiipod_feats_user_default_roles() {
  $roles = array();

  // Exported role: Documentation User
  $roles['Documentation User'] = array(
    'name' => 'Documentation User',
  );

  // Exported role: Project Administrators
  $roles['Project Administrators'] = array(
    'name' => 'Project Administrators',
  );

  // Exported role: Project Members
  $roles['Project Members'] = array(
    'name' => 'Project Members',
  );

  // Exported role: Site Administrators
  $roles['Site Administrators'] = array(
    'name' => 'Site Administrators',
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
  );

  return $roles;
}
