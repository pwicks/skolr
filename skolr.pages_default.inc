<?php

/**
 * Implementation of hook_default_page_manager_handlers().
 */
function skolr_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Poster',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'context' => 'argument_node_edit_1',
        'name' => 'og',
        'id' => 1,
        'identifier' => 'Organic Group from node',
        'keyword' => 'og',
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'poster' => 'poster',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
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
          1 => 'main-row',
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'meeting',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'meeting' => array(
        'type' => 'region',
        'title' => 'Meeting',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'meeting' => array(
        'corner_location' => 'pane',
      ),
    ),
    'meeting' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'center';
    $pane->type = 'node_form_buttons';
    $pane->subtype = 'node_form_buttons';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['center'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'meeting';
    $pane->type = 'panels_mini';
    $pane->subtype = 'meeting_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_node_edit_1',
      ),
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-3'] = $pane;
    $display->panels['meeting'][0] = 'new-3';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Meeting',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => 'dops-meeting',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'context' => 'argument_nid_1',
        'name' => 'og',
        'id' => 1,
        'identifier' => 'Organic Group',
        'keyword' => 'og',
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'meeting' => 'meeting',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
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
          0 => 3,
          1 => 2,
          2 => 1,
        ),
        'parent' => 'canvas',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'logo',
          1 => 'meeting_header',
          2 => 'location',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'meeting_header' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => '55',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'logo' => array(
        'type' => 'region',
        'title' => 'Attendees',
        'width' => '20',
        'width_type' => '%',
        'parent' => '1',
        'class' => 'dops-meeting-attendees',
      ),
      'location' => array(
        'type' => 'region',
        'title' => 'Right Side',
        'width' => '25',
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'details',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'details' => array(
        'type' => 'region',
        'title' => 'Details',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'dops-meeting-header',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'meeting_header_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'meeting_header_' => array(
        'type' => 'region',
        'title' => 'Meeting Header',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(
        'corner_location' => 'panel',
      ),
      'center' => NULL,
      'logo' => NULL,
      'location' => NULL,
      'date' => NULL,
      'details' => NULL,
      'create' => NULL,
      'logo_' => NULL,
      'header' => array(
        'corner_location' => 'pane',
      ),
      'meeting_header' => NULL,
      'meeting_header_' => array(
        'corner_location' => 'panel',
      ),
    ),
    'details' => array(
      'style' => 'default',
    ),
    'create' => array(
      'style' => 'default',
    ),
    'style' => 'rounded_corners',
    'logo_' => array(
      'style' => 'default',
    ),
    'header' => array(
      'style' => 'rounded_corners',
    ),
    'meeting_header' => array(
      'style' => 'default',
    ),
    'meeting_header_' => array(
      'style' => 'rounded_corners',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'location';
    $pane->type = 'content_field';
    $pane->subtype = 'field_meeting_deadline';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['location'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'location';
    $pane->type = 'block';
    $pane->subtype = 'skolr-0';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['location'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'location';
    $pane->type = 'block';
    $pane->subtype = 'views-9e2735789eaaa4e68dc9cc0c890463d6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'inherit_path' => 1,
      'override_title' => 1,
      'override_title_text' => 'Search posters',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['location'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'logo';
    $pane->type = 'views';
    $pane->subtype = 'og_members_faces_OR';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 1,
      'nodes_per_page' => '25',
      'pager_id' => '',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'default',
      'context' => array(
        0 => 'argument_nid_1.nid',
      ),
      'override_title' => 1,
      'override_title_text' => 'Meeting Attendees',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'group-members-gallery',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['logo'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'meeting_header';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-5'] = $pane;
    $display->panels['meeting_header'][0] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'meeting_header';
    $pane->type = 'views_panes';
    $pane->subtype = 'meeting_posters-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-6'] = $pane;
    $display->panels['meeting_header'][1] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'meeting_header_';
    $pane->type = 'panels_mini';
    $pane->subtype = 'meeting_header_meeting';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'meeting-header-meeting',
      'css_class' => 'meeting-header',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['meeting_header_'][0] = 'new-7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'Poster',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'context' => 'argument_nid_1',
        'name' => 'og',
        'id' => 1,
        'identifier' => 'Organic Group from node',
        'keyword' => 'og',
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'poster' => 'poster',
            ),
          ),
          'context' => 'argument_nid_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display;
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
          0 => 4,
          1 => 2,
          2 => 7,
          3 => 10,
        ),
        'parent' => 'canvas',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'poster_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'poster_' => array(
        'type' => 'region',
        'title' => 'Title',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => 'poster-title',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'meeting',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'meeting' => array(
        'type' => 'region',
        'title' => 'Meeting',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      7 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 11,
          1 => 12,
        ),
        'parent' => 'main',
        'class' => 'poster-main',
      ),
      10 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'comments',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'comments' => array(
        'type' => 'region',
        'title' => 'Comments',
        'width' => 100,
        'width_type' => '%',
        'parent' => '10',
        'class' => '',
      ),
      11 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => '7',
        'children' => array(
          0 => 13,
          1 => 15,
        ),
        'class' => '',
      ),
      12 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => '7',
        'children' => array(
          0 => 14,
        ),
        'class' => '',
      ),
      13 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'poster__',
        ),
        'parent' => '11',
        'class' => '',
      ),
      14 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'abstract_',
        ),
        'parent' => '12',
        'class' => '',
      ),
      15 => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 16,
          1 => 17,
        ),
        'parent' => '11',
        'class' => 'poster-authors',
      ),
      16 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => '15',
        'children' => array(
          0 => 18,
        ),
        'class' => '',
      ),
      17 => array(
        'type' => 'column',
        'width' => '50',
        'width_type' => '%',
        'parent' => '15',
        'children' => array(
          0 => 19,
        ),
        'class' => '',
      ),
      18 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'authors',
        ),
        'parent' => '16',
        'class' => '',
      ),
      'authors' => array(
        'type' => 'region',
        'title' => 'Authors',
        'width' => 100,
        'width_type' => '%',
        'parent' => '18',
        'class' => '',
      ),
      19 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'uploaded_by',
        ),
        'parent' => '17',
        'class' => '',
      ),
      'uploaded_by' => array(
        'type' => 'region',
        'title' => 'Uploaded by',
        'width' => 100,
        'width_type' => '%',
        'parent' => '19',
        'class' => '',
      ),
      'abstract_' => array(
        'type' => 'region',
        'title' => 'Abstract',
        'width' => 100,
        'width_type' => '%',
        'parent' => '14',
        'class' => '',
      ),
      'poster__' => array(
        'type' => 'region',
        'title' => 'Poster',
        'width' => 100,
        'width_type' => '%',
        'parent' => '13',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'logo' => array(
        'corner_location' => 'pane',
      ),
      'details' => NULL,
      'right_side' => NULL,
      'poster_' => NULL,
      'organization' => NULL,
      'meeting' => array(
        'corner_location' => 'panel',
      ),
      'poster' => NULL,
      'abstract' => NULL,
      'comments_' => NULL,
      'authors' => NULL,
      'uploaded_by' => NULL,
      'poster__' => NULL,
      'abstract_' => NULL,
      'comments' => NULL,
    ),
    'poster_' => array(
      'style' => 'default',
    ),
    'logo' => array(
      'style' => 'rounded_corners',
    ),
    'meeting' => array(
      'style' => 'rounded_corners',
    ),
    'poster__' => array(
      'style' => 'default',
    ),
    'abstract_' => array(
      'style' => 'default',
    ),
    'comments' => array(
      'style' => 'default',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'abstract_';
    $pane->type = 'content_field';
    $pane->subtype = 'field_abstract';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['abstract_'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'abstract_';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '4',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'Datasets',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-2'] = $pane;
    $display->panels['abstract_'][1] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'abstract_';
    $pane->type = 'node_terms';
    $pane->subtype = 'node_terms';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'vid' => '5',
      'term_format' => 'term-links',
      'link' => 1,
      'term_delimiter' => ', ',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'Keywords',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-3'] = $pane;
    $display->panels['abstract_'][2] = 'new-3';
    $pane = new stdClass;
    $pane->pid = 'new-4';
    $pane->panel = 'authors';
    $pane->type = 'content_field';
    $pane->subtype = 'field_poster_authors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-4'] = $pane;
    $display->panels['authors'][0] = 'new-4';
    $pane = new stdClass;
    $pane->pid = 'new-5';
    $pane->panel = 'authors';
    $pane->type = 'content_field';
    $pane->subtype = 'field_poster_institutions';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'poster-institutions',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-5'] = $pane;
    $display->panels['authors'][1] = 'new-5';
    $pane = new stdClass;
    $pane->pid = 'new-6';
    $pane->panel = 'authors';
    $pane->type = 'content_field';
    $pane->subtype = 'field_poster_grants';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'poster-grants',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 2;
    $display->content['new-6'] = $pane;
    $display->panels['authors'][2] = 'new-6';
    $pane = new stdClass;
    $pane->pid = 'new-7';
    $pane->panel = 'comments';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '4',
      'order' => '1',
      'comments_per_page' => '50',
      'anchor' => 1,
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'stylizer',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-7'] = $pane;
    $display->panels['comments'][0] = 'new-7';
    $pane = new stdClass;
    $pane->pid = 'new-8';
    $pane->panel = 'comments';
    $pane->type = 'node_comment_form';
    $pane->subtype = 'node_comment_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => 0,
      'context' => 'argument_nid_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-8'] = $pane;
    $display->panels['comments'][1] = 'new-8';
    $pane = new stdClass;
    $pane->pid = 'new-9';
    $pane->panel = 'meeting';
    $pane->type = 'panels_mini';
    $pane->subtype = 'meeting_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'meeting-header-poster',
      'css_class' => 'meeting-header',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-9'] = $pane;
    $display->panels['meeting'][0] = 'new-9';
    $pane = new stdClass;
    $pane->pid = 'new-10';
    $pane->panel = 'poster_';
    $pane->type = 'content_field';
    $pane->subtype = 'field_poster_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-10'] = $pane;
    $display->panels['poster_'][0] = 'new-10';
    $pane = new stdClass;
    $pane->pid = 'new-11';
    $pane->panel = 'poster_';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-11'] = $pane;
    $display->panels['poster_'][1] = 'new-11';
    $pane = new stdClass;
    $pane->pid = 'new-12';
    $pane->panel = 'poster__';
    $pane->type = 'content_field';
    $pane->subtype = 'field_poster';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'normal',
      'formatter' => 'imagefield__lightbox2__pdf-preview__pdf-orig',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-12'] = $pane;
    $display->panels['poster__'][0] = 'new-12';
    $pane = new stdClass;
    $pane->pid = 'new-13';
    $pane->panel = 'poster__';
    $pane->type = 'content_field';
    $pane->subtype = 'field_poster';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'default',
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'Download PDF',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-13'] = $pane;
    $display->panels['poster__'][1] = 'new-13';
    $pane = new stdClass;
    $pane->pid = 'new-14';
    $pane->panel = 'uploaded_by';
    $pane->type = 'node_author';
    $pane->subtype = 'node_author';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 1,
      'context' => 'argument_nid_1',
      'override_title' => 1,
      'override_title_text' => 'Uploaded by',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-14'] = $pane;
    $display->panels['uploaded_by'][0] = 'new-14';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  return $export;
}

/**
 * Implementation of hook_default_page_manager_pages().
 */
function skolr_default_page_manager_pages() {
  $page = new stdClass;
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'meeting_admin';
  $page->task = 'page';
  $page->admin_title = 'Meeting Admin';
  $page->admin_description = 'Administration Pages for meetings.  Sortable, printable numbered lists of posters.';
  $page->path = 'node/%meeting/poster-list';
  $page->access = array(
    'plugins' => array(
      2 => array(
        'name' => 'node_access',
        'settings' => array(
          'type' => 'update',
        ),
        'context' => array(
          0 => 'logged-in-user',
          1 => 'argument_nid_1',
        ),
        'not' => FALSE,
      ),
      3 => array(
        'name' => 'context_exists',
        'settings' => array(
          'exists' => '1',
        ),
        'context' => 'argument_nid_1',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'meeting' => array(
      'id' => 1,
      'identifier' => 'Node: ID',
      'name' => 'nid',
      'settings' => array(),
    ),
  );
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass;
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_meeting_admin_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'meeting_admin';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'context' => 'argument_nid_1',
        'name' => 'og',
        'id' => 1,
        'identifier' => 'Organic Group from node',
        'keyword' => 'og',
      ),
    ),
  );
  $display = new panels_display;
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
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'main_',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'main_' => array(
        'type' => 'region',
        'title' => 'Main',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => array(
        'corner_location' => 'pane',
      ),
      'main_' => array(
        'title' => '',
        'filling_tabs' => 'disabled',
      ),
    ),
    'center' => array(
      'style' => 'rounded_corners',
    ),
    'main_' => array(
      'style' => 'tabs',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass;
    $pane->pid = 'new-1';
    $pane->panel = 'center';
    $pane->type = 'panels_mini';
    $pane->subtype = 'meeting_header_meeting';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'meeting-header-meeting',
      'css_class' => 'meeting-header',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-1'] = $pane;
    $display->panels['center'][0] = 'new-1';
    $pane = new stdClass;
    $pane->pid = 'new-2';
    $pane->panel = 'main_';
    $pane->type = 'views_panes';
    $pane->subtype = 'meeting_admin-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Numbered',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'meeting-admin-list',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $display->content['new-2'] = $pane;
    $display->panels['main_'][0] = 'new-2';
    $pane = new stdClass;
    $pane->pid = 'new-3';
    $pane->panel = 'main_';
    $pane->type = 'views_panes';
    $pane->subtype = 'meeting_admin-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_nid_1',
      ),
      'override_title' => 1,
      'override_title_text' => 'Printable',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'meeting-admin-print',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 1;
    $display->content['new-3'] = $pane;
    $display->panels['main_'][1] = 'new-3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['meeting_admin'] = $page;

 return $pages;

}
