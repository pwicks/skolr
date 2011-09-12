<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function skolr_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:meetings
  $menu_links['navigation:meetings'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'meetings',
    'router_path' => 'meetings',
    'link_title' => 'Meetings',
    'options' => array(
      'attributes' => array(
        'title' => 'View your meetings',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: navigation:node/add/meeting
  $menu_links['navigation:node/add/meeting'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/meeting',
    'router_path' => 'node/add/meeting',
    'link_title' => 'Conference Meeting',
    'options' => array(
      'attributes' => array(
        'title' => 'A Conference Meeting is an organic group that contains Poster Presenters and Meeting Attendees, and in which Poster Presenters can post Conference Posters.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'node/add',
  );
  // Exported menu link: navigation:posters
  $menu_links['navigation:posters'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'posters',
    'router_path' => 'posters',
    'link_title' => 'Posters',
    'options' => array(
      'attributes' => array(
        'title' => 'View your posters',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Conference Meeting');
  t('Meetings');
  t('Posters');


  return $menu_links;
}
