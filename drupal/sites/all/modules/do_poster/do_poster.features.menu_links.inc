<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function do_poster_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:meetings
  $menu_links['primary-links:meetings'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'meetings',
    'router_path' => 'meetings',
    'link_title' => 'Meetings',
    'options' => array(
      'attributes' => array(
        'title' => 'View your meetings',
      ),
    ),
    'module' => 'do_poster',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '2',
    'parent_path' => 'user',
  );
  // Exported menu link: primary-links:node/add/meeting
  $menu_links['primary-links:node/add/meeting'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/add/meeting',
    'router_path' => 'node/add/meeting',
    'link_title' => 'Add Conference Meeting',
    'options' => array(
      'attributes' => array(
        'title' => 'A a new conference meeting',
      ),
    ),
    'module' => 'do_poster',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
    'parent_path' => 'groups',
  );
  // Exported menu link: primary-links:posters
  $menu_links['primary-links:posters'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'posters',
    'router_path' => 'posters',
    'link_title' => 'Posters',
    'options' => array(
      'attributes' => array(
        'title' => 'View your posters',
      ),
    ),
    'module' => 'do_poster',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '4',
    'parent_path' => 'user',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Conference Meeting');
  t('Meetings');
  t('Posters');


  return $menu_links;
}
