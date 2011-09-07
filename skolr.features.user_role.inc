<?php

/**
 * Implementation of hook_user_default_roles().
 */
function skolr_user_default_roles() {
  $roles = array();

  // Exported role: meeting attendee
  $roles['meeting attendee'] = array(
    'name' => 'meeting attendee',
  );

  // Exported role: meeting organizer
  $roles['meeting organizer'] = array(
    'name' => 'meeting organizer',
  );

  // Exported role: poster presenter
  $roles['poster presenter'] = array(
    'name' => 'poster presenter',
  );

  return $roles;
}
