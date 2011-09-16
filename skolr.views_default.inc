<?php

/**
 * Implementation of hook_views_default_views().
 */
function skolr_views_default_views() {
  $views = array();

  // Exported view: meeting_admin
  $view = new view;
  $view->name = 'meeting_admin';
  $view->description = 'Admin view for meeting organizers';
  $view->tag = 'digitalocean';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['items_per_page'] = 0;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['text']['id'] = 'area';
  $handler->display->display_options['header']['text']['table'] = 'views';
  $handler->display->display_options['header']['text']['field'] = 'area';
  $handler->display->display_options['header']['text']['label'] = '';
  $handler->display->display_options['header']['text']['empty'] = FALSE;
  $handler->display->display_options['header']['text']['content'] = '<?php

//print drupal_get_form(\'skolr_print_posters_form\');
?>';
  $handler->display->display_options['header']['text']['format'] = '3';
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'There are no records.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Global: View result counter */
  $handler->display->display_options['fields']['counter']['id'] = 'counter';
  $handler->display->display_options['fields']['counter']['table'] = 'views';
  $handler->display->display_options['fields']['counter']['field'] = 'counter';
  $handler->display->display_options['fields']['counter']['label'] = 'Number';
  $handler->display->display_options['fields']['counter']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['counter']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['counter']['alter']['html'] = 0;
  $handler->display->display_options['fields']['counter']['hide_empty'] = 0;
  $handler->display->display_options['fields']['counter']['empty_zero'] = 0;
  $handler->display->display_options['fields']['counter']['counter_start'] = '1';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = 'Presenter';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Node: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'M j, Y';
  /* Field: Node: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['changed']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['changed']['alter']['html'] = 0;
  $handler->display->display_options['fields']['changed']['hide_empty'] = 0;
  $handler->display->display_options['fields']['changed']['empty_zero'] = 0;
  $handler->display->display_options['fields']['changed']['date_format'] = 'custom';
  $handler->display->display_options['fields']['changed']['custom_date_format'] = 'M j, Y';
  /* Field: Node: Publish link */
  $handler->display->display_options['fields']['publishcontent']['id'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['table'] = 'node';
  $handler->display->display_options['fields']['publishcontent']['field'] = 'publishcontent';
  $handler->display->display_options['fields']['publishcontent']['label'] = '';
  $handler->display->display_options['fields']['publishcontent']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['external'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['publishcontent']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['publishcontent']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['publishcontent']['alter']['html'] = 0;
  $handler->display->display_options['fields']['publishcontent']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['publishcontent']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['publishcontent']['hide_empty'] = 0;
  $handler->display->display_options['fields']['publishcontent']['empty_zero'] = 0;
  $handler->display->display_options['fields']['publishcontent']['hide_alter_empty'] = 0;
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['title'] = '%1';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;

  /* Display: Poster List */
  $handler = $view->new_display('panel_pane', 'Poster List', 'panel_pane_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'counter' => 'counter',
    'title' => 'title',
    'name' => 'name',
    'created' => 'created',
    'changed' => 'changed',
    'publishcontent' => 'publishcontent',
  );
  $handler->display->display_options['style_options']['default'] = 'created';
  $handler->display->display_options['style_options']['info'] = array(
    'counter' => array(
      'align' => '',
      'separator' => '',
    ),
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'changed' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
    ),
    'publishcontent' => array(
      'align' => '',
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['exposed'] = TRUE;
  $handler->display->display_options['filters']['status']['expose']['label'] = 'Published';
  $handler->display->display_options['filters']['status']['expose']['identifier'] = 'status';
  $handler->display->display_options['filters']['status']['expose']['optional'] = 0;
  $handler->display->display_options['pane_title'] = 'Admin Poster List';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'group_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organic groups: Groups',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  /* Display: With Abstracts */
  $handler = $view->new_display('panel_pane', 'With Abstracts', 'panel_pane_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Author(s) (field_poster_authors) */
  $handler->display->display_options['fields']['field_poster_authors_value']['id'] = 'field_poster_authors_value';
  $handler->display->display_options['fields']['field_poster_authors_value']['table'] = 'node_data_field_poster_authors';
  $handler->display->display_options['fields']['field_poster_authors_value']['field'] = 'field_poster_authors_value';
  $handler->display->display_options['fields']['field_poster_authors_value']['label'] = 'Author(s)';
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_poster_authors_value']['multiple']['group'] = 1;
  $handler->display->display_options['fields']['field_poster_authors_value']['multiple']['multiple_reversed'] = 0;
  /* Field: Content: Abstract (field_abstract) */
  $handler->display->display_options['fields']['field_abstract_value']['id'] = 'field_abstract_value';
  $handler->display->display_options['fields']['field_abstract_value']['table'] = 'node_data_field_abstract';
  $handler->display->display_options['fields']['field_abstract_value']['field'] = 'field_abstract_value';
  $handler->display->display_options['fields']['field_abstract_value']['label'] = 'Abstract';
  $handler->display->display_options['fields']['field_abstract_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_abstract_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_abstract_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_abstract_value']['link_to_node'] = 0;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter: Node: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  $handler->display->display_options['pane_title'] = 'Admin Poster List with Abstracts';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'group_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organic groups: Groups',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  $views[$view->name] = $view;

  // Exported view: meeting_header
  $view = new view;
  $view->name = 'meeting_header';
  $view->description = 'The header info for a meeting';
  $view->tag = 'dops';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dates (field_meetings_dates) - From date */
  $handler->display->display_options['fields']['field_meetings_dates_value']['id'] = 'field_meetings_dates_value';
  $handler->display->display_options['fields']['field_meetings_dates_value']['table'] = 'node_data_field_meetings_dates';
  $handler->display->display_options['fields']['field_meetings_dates_value']['field'] = 'field_meetings_dates_value';
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['label_type'] = 'none';
  /* Field: Content: Location (field_meeting_location) */
  $handler->display->display_options['fields']['field_meeting_location_value']['id'] = 'field_meeting_location_value';
  $handler->display->display_options['fields']['field_meeting_location_value']['table'] = 'node_data_field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location_value']['field'] = 'field_meeting_location_value';
  $handler->display->display_options['fields']['field_meeting_location_value']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['label_type'] = 'none';
  /* Field: Content: Website (field_meeting_website) */
  $handler->display->display_options['fields']['field_meeting_website_url']['id'] = 'field_meeting_website_url';
  $handler->display->display_options['fields']['field_meeting_website_url']['table'] = 'node_data_field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website_url']['field'] = 'field_meeting_website_url';
  $handler->display->display_options['fields']['field_meeting_website_url']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['label_type'] = 'none';
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_group_node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Meeting Details */
  $handler = $view->new_display('panel_pane', 'Meeting Details', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Meeting Details';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  );

  /* Display: Org Details */
  $handler = $view->new_display('panel_pane', 'Org Details', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo (field_meeting_org_logo) */
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['id'] = 'field_meeting_org_logo_fid';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['table'] = 'node_data_field_meeting_org_logo';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['field'] = 'field_meeting_org_logo_fid';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['format'] = 'thumbnail_default';
  /* Field: Content: Organization (field_organization) */
  $handler->display->display_options['fields']['field_organization_url']['id'] = 'field_organization_url';
  $handler->display->display_options['fields']['field_organization_url']['table'] = 'node_data_field_organization';
  $handler->display->display_options['fields']['field_organization_url']['field'] = 'field_organization_url';
  $handler->display->display_options['fields']['field_organization_url']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_organization_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['label_type'] = 'none';
  $handler->display->display_options['pane_title'] = 'Meeting Organization Header';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  );

  /* Display: Meeting Logo */
  $handler = $view->new_display('panel_pane', 'Meeting Logo', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Meeting Logo (field_meeting_logo) */
  $handler->display->display_options['fields']['field_meeting_logo_fid']['id'] = 'field_meeting_logo_fid';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['table'] = 'node_data_field_meeting_logo';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['field'] = 'field_meeting_logo_fid';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['format'] = 'thumbnail_linked';
  $handler->display->display_options['pane_title'] = 'Meeting Logo';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  );

  $views[$view->name] = $view;

  // Exported view: meeting_posters
  $view = new view;
  $view->name = 'meeting_posters';
  $view->description = 'A meeting\'s posters.';
  $view->tag = 'dops';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 0;
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = 24;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '3';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['exposed_block'] = TRUE;
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No posters have been added.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Title Abbrev';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['max_length'] = '19';
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 0;
  /* Field: Node: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['path']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['path']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['path']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['path']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['path']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['path']['alter']['html'] = 0;
  $handler->display->display_options['fields']['path']['hide_empty'] = 0;
  $handler->display->display_options['fields']['path']['empty_zero'] = 0;
  $handler->display->display_options['fields']['path']['absolute'] = 1;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title_1]';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['nothing']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  /* Field: Content: Poster (field_poster) */
  $handler->display->display_options['fields']['field_poster_fid']['id'] = 'field_poster_fid';
  $handler->display->display_options['fields']['field_poster_fid']['table'] = 'node_data_field_poster';
  $handler->display->display_options['fields']['field_poster_fid']['field'] = 'field_poster_fid';
  $handler->display->display_options['fields']['field_poster_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['alter']['make_link'] = 1;
  $handler->display->display_options['fields']['field_poster_fid']['alter']['path'] = '[path]';
  $handler->display->display_options['fields']['field_poster_fid']['alter']['alt'] = '[title]';
  $handler->display->display_options['fields']['field_poster_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_poster_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_poster_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['empty'] = 'hi';
  $handler->display->display_options['fields']['field_poster_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_poster_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_poster_fid']['format'] = 'imagefield__lightshow2__pdf-thumb__pdf-orig';
  /* Field: Node: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['text'] = 'View abstract';
  /* Argument: Organic groups: Groups */
  $handler->display->display_options['arguments']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['arguments']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['arguments']['group_nid']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['group_nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['group_nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['group_nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['group_nid']['not'] = 0;
  /* Filter: Node: Published or admin */
  $handler->display->display_options['filters']['status_extra']['id'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['table'] = 'node';
  $handler->display->display_options['filters']['status_extra']['field'] = 'status_extra';
  $handler->display->display_options['filters']['status_extra']['expose']['operator'] = FALSE;
  /* Filter: Content: Search computed (field_poster_search_computed) */
  $handler->display->display_options['filters']['field_poster_search_computed_value']['id'] = 'field_poster_search_computed_value';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['table'] = 'node_data_field_poster_search_computed';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['field'] = 'field_poster_search_computed_value';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['operator'] = 'word';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_poster_search_computed_value']['expose']['operator'] = 'field_poster_search_computed_value_op';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['expose']['limit_operators'] = array();
  $handler->display->display_options['filters']['field_poster_search_computed_value']['expose']['label'] = 'Containing';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['expose']['identifier'] = 'search';
  $handler->display->display_options['filters']['field_poster_search_computed_value']['expose']['optional'] = 1;
  $handler->display->display_options['filters']['field_poster_search_computed_value']['case'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Meeting Poster Gallery';
  $handler->display->display_options['allow']['use_pager'] = 0;
  $handler->display->display_options['allow']['items_per_page'] = 0;
  $handler->display->display_options['allow']['offset'] = 0;
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 0;
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 0;
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 0;
  $handler->display->display_options['argument_input'] = array(
    'group_nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organic groups: Groups',
    ),
  );
  $handler->display->display_options['inherit_panels_path'] = '1';

  $views[$view->name] = $view;

  // Exported view: my_meetings
  $view = new view;
  $view->name = 'my_meetings';
  $view->description = 'A user\'s meetings';
  $view->tag = 'dops';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => 11,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_meetings_dates_value' => 'field_meetings_dates_value',
    'field_meeting_location_value' => 'field_meeting_location_value',
    'edit_node' => 'edit_node',
    'managelinkmy' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_meetings_dates_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'field_meeting_location_value' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'edit_node' => array(
      'separator' => ' ',
    ),
    'managelinkmy' => array(
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dates (field_meetings_dates) - From date */
  $handler->display->display_options['fields']['field_meetings_dates_value']['id'] = 'field_meetings_dates_value';
  $handler->display->display_options['fields']['field_meetings_dates_value']['table'] = 'node_data_field_meetings_dates';
  $handler->display->display_options['fields']['field_meetings_dates_value']['field'] = 'field_meetings_dates_value';
  $handler->display->display_options['fields']['field_meetings_dates_value']['label'] = 'Dates';
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['link_to_node'] = 0;
  /* Field: Content: Location (field_meeting_location) */
  $handler->display->display_options['fields']['field_meeting_location_value']['id'] = 'field_meeting_location_value';
  $handler->display->display_options['fields']['field_meeting_location_value']['table'] = 'node_data_field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location_value']['field'] = 'field_meeting_location_value';
  $handler->display->display_options['fields']['field_meeting_location_value']['label'] = 'Location';
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['link_to_node'] = 0;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Argument: Organic groups: Member of a group */
  $handler->display->display_options['arguments']['uid_1']['id'] = 'uid_1';
  $handler->display->display_options['arguments']['uid_1']['table'] = 'og_uid';
  $handler->display->display_options['arguments']['uid_1']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid_1']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid_1']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid_1']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid_1']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid_1']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'meeting' => 'meeting',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/%/meetings';
  $handler->display->display_options['menu']['title'] = 'Meetings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  // Exported view: my_posters
  $view = new view;
  $view->name = 'my_posters';
  $view->description = 'A user\'s posters';
  $view->tag = 'dops';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    11 => 11,
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'title_1' => 'title_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'title_1' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Poster';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Meeting';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Node: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['text'] = 'edit';
  /* Argument: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['uid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['uid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['uid']['not'] = 0;
  /* Filter: Node: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'poster' => 'poster',
  );
  $handler->display->display_options['filters']['type']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'user/%/posters';
  $handler->display->display_options['menu']['title'] = 'Meetings';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'primary-links';

  $views[$view->name] = $view;

  // Exported view: og_members_faces_OR
  $view = new view;
  $view->name = 'og_members_faces_OR';
  $view->description = 'Override Member listing in grid with user pictures';
  $view->tag = 'og';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['title'] = 'Group faces';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'mini';
  $handler->display->display_options['pager']['options']['items_per_page'] = '24';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['style_plugin'] = 'grid';
  $handler->display->display_options['style_options']['columns'] = '2';
  $handler->display->display_options['style_options']['fill_single_line'] = 1;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'name' => 'name',
    'is_manager' => 'is_manager',
    'is_admin' => 'is_admin',
  );
  /* Empty text: Global: Text area */
  $handler->display->display_options['empty']['text']['id'] = 'area';
  $handler->display->display_options['empty']['text']['table'] = 'views';
  $handler->display->display_options['empty']['text']['field'] = 'area';
  $handler->display->display_options['empty']['text']['label'] = '';
  $handler->display->display_options['empty']['text']['empty'] = FALSE;
  $handler->display->display_options['empty']['text']['content'] = 'No members.';
  $handler->display->display_options['empty']['text']['format'] = '1';
  /* Field: User: Picture */
  $handler->display->display_options['fields']['picture']['id'] = 'picture';
  $handler->display->display_options['fields']['picture']['table'] = 'users';
  $handler->display->display_options['fields']['picture']['field'] = 'picture';
  $handler->display->display_options['fields']['picture']['label'] = '';
  $handler->display->display_options['fields']['picture']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['external'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['picture']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['picture']['alter']['html'] = 0;
  $handler->display->display_options['fields']['picture']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['picture']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['picture']['hide_empty'] = 0;
  $handler->display->display_options['fields']['picture']['empty_zero'] = 0;
  $handler->display->display_options['fields']['picture']['hide_alter_empty'] = 0;
  $handler->display->display_options['fields']['picture']['imagecache_preset'] = 'user_image_small';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['max_length'] = '30';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  /* Field: Organic groups: OG: Is member an admin in a group */
  $handler->display->display_options['fields']['is_admin']['id'] = 'is_admin';
  $handler->display->display_options['fields']['is_admin']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_admin']['field'] = 'is_admin';
  $handler->display->display_options['fields']['is_admin']['label'] = '';
  /* Sort criterion: Organic groups: OG: Is member an admin in a group */
  $handler->display->display_options['sorts']['is_admin']['id'] = 'is_admin';
  $handler->display->display_options['sorts']['is_admin']['table'] = 'og_uid';
  $handler->display->display_options['sorts']['is_admin']['field'] = 'is_admin';
  $handler->display->display_options['sorts']['is_admin']['order'] = 'DESC';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Argument: Organic groups: Group node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'og_uid';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['title'] = 'Members of %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'og_group_types';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter: Organic groups: OG: Is membership approved */
  $handler->display->display_options['filters']['is_active']['id'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['filters']['is_active']['field'] = 'is_active';
  $handler->display->display_options['filters']['is_active']['value'] = 1;
  $handler->display->display_options['filters']['is_active']['group'] = 0;
  $handler->display->display_options['filters']['is_active']['expose']['operator'] = FALSE;

  $views[$view->name] = $view;

  // Exported view: og_members_meeting
  $view = new view;
  $view->name = 'og_members_meeting';
  $view->description = 'Member listing for meetings';
  $view->tag = 'dops';
  $view->base_table = 'users';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = 90;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'managelink' => 'managelink',
    'managelinkadmin' => 'managelinkadmin',
    'is_manager' => 'name',
    'is_admin' => 'name',
    'is_active' => 'name',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'separator' => '&nbsp;',
    ),
    'managelink' => array(
      'separator' => '',
    ),
    'managelinkadmin' => array(
      'separator' => '',
    ),
    'is_manager' => array(
      'separator' => '',
    ),
    'is_admin' => array(
      'sortable' => 0,
      'separator' => '',
    ),
    'is_active' => array(
      'sortable' => 0,
      'separator' => '',
    ),
  );
  $handler->display->display_options['style_options']['override'] = 0;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  /* Field: Organic groups: OG: Approve/Deny/Remove membership link */
  $handler->display->display_options['fields']['managelink']['id'] = 'managelink';
  $handler->display->display_options['fields']['managelink']['table'] = 'og_uid';
  $handler->display->display_options['fields']['managelink']['field'] = 'managelink';
  $handler->display->display_options['fields']['managelink']['label'] = 'Manage';
  /* Field: Organic groups: OG: Admin manage link */
  $handler->display->display_options['fields']['managelinkadmin']['id'] = 'managelinkadmin';
  $handler->display->display_options['fields']['managelinkadmin']['table'] = 'og_uid';
  $handler->display->display_options['fields']['managelinkadmin']['field'] = 'managelinkadmin';
  $handler->display->display_options['fields']['managelinkadmin']['label'] = 'Admin';
  /* Field: Organic groups: OG: Is the group manager */
  $handler->display->display_options['fields']['is_manager']['id'] = 'is_manager';
  $handler->display->display_options['fields']['is_manager']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_manager']['field'] = 'is_manager';
  $handler->display->display_options['fields']['is_manager']['label'] = '';
  $handler->display->display_options['fields']['is_manager']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['is_manager']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['is_manager']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['is_manager']['alter']['html'] = 0;
  /* Field: Organic groups: OG: Is member an admin in a group */
  $handler->display->display_options['fields']['is_admin']['id'] = 'is_admin';
  $handler->display->display_options['fields']['is_admin']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_admin']['field'] = 'is_admin';
  $handler->display->display_options['fields']['is_admin']['label'] = '';
  /* Field: Organic groups: OG: Is membership approved */
  $handler->display->display_options['fields']['is_active']['id'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['fields']['is_active']['field'] = 'is_active';
  $handler->display->display_options['fields']['is_active']['label'] = '';
  /* Sort criterion: Organic groups: OG: Is member an admin in a group */
  $handler->display->display_options['sorts']['is_admin']['id'] = 'is_admin';
  $handler->display->display_options['sorts']['is_admin']['table'] = 'og_uid';
  $handler->display->display_options['sorts']['is_admin']['field'] = 'is_admin';
  $handler->display->display_options['sorts']['is_admin']['order'] = 'DESC';
  /* Sort criterion: Organic groups: OG: Is membership approved */
  $handler->display->display_options['sorts']['is_active']['id'] = 'is_active';
  $handler->display->display_options['sorts']['is_active']['table'] = 'og_uid';
  $handler->display->display_options['sorts']['is_active']['field'] = 'is_active';
  /* Sort criterion: User: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'users';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  /* Argument: Organic groups: Group node */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'og_uid';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['title'] = 'Members of %1';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['validate_type'] = 'og_group_types';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;
  /* Filter: User: Active */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'users';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 0;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'og/users/%/list';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'List';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'List';
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Meeting Members';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Organic groups: Group node',
    ),
  );

  $views[$view->name] = $view;

  // Exported view: poster_meeting
  $view = new view;
  $view->name = 'poster_meeting';
  $view->description = 'The Meeting info for a poster';
  $view->tag = 'dops';
  $view->base_table = 'node';
  $view->human_name = '';
  $view->core = 0;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Defaults */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Organic groups: Group node (post) */
  $handler->display->display_options['relationships']['group_nid']['id'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['table'] = 'og_ancestry';
  $handler->display->display_options['relationships']['group_nid']['field'] = 'group_nid';
  $handler->display->display_options['relationships']['group_nid']['required'] = 1;
  /* Field: Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Dates (field_meetings_dates) - From date */
  $handler->display->display_options['fields']['field_meetings_dates_value']['id'] = 'field_meetings_dates_value';
  $handler->display->display_options['fields']['field_meetings_dates_value']['table'] = 'node_data_field_meetings_dates';
  $handler->display->display_options['fields']['field_meetings_dates_value']['field'] = 'field_meetings_dates_value';
  $handler->display->display_options['fields']['field_meetings_dates_value']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meetings_dates_value']['label_type'] = 'none';
  /* Field: Content: Location (field_meeting_location) */
  $handler->display->display_options['fields']['field_meeting_location_value']['id'] = 'field_meeting_location_value';
  $handler->display->display_options['fields']['field_meeting_location_value']['table'] = 'node_data_field_meeting_location';
  $handler->display->display_options['fields']['field_meeting_location_value']['field'] = 'field_meeting_location_value';
  $handler->display->display_options['fields']['field_meeting_location_value']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_location_value']['label_type'] = 'none';
  /* Field: Content: Website (field_meeting_website) */
  $handler->display->display_options['fields']['field_meeting_website_url']['id'] = 'field_meeting_website_url';
  $handler->display->display_options['fields']['field_meeting_website_url']['table'] = 'node_data_field_meeting_website';
  $handler->display->display_options['fields']['field_meeting_website_url']['field'] = 'field_meeting_website_url';
  $handler->display->display_options['fields']['field_meeting_website_url']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_website_url']['label_type'] = 'none';
  /* Argument: Node: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['style_plugin'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'og_group_node';
  $handler->display->display_options['arguments']['nid']['break_phrase'] = 0;
  $handler->display->display_options['arguments']['nid']['not'] = 0;

  /* Display: Meeting Details */
  $handler = $view->new_display('panel_pane', 'Meeting Details', 'panel_pane_1');
  $handler->display->display_options['pane_title'] = 'Poster Meeting Header';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  );

  /* Display: Org Details */
  $handler = $view->new_display('panel_pane', 'Org Details', 'panel_pane_2');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Logo (field_meeting_org_logo) */
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['id'] = 'field_meeting_org_logo_fid';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['table'] = 'node_data_field_meeting_org_logo';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['field'] = 'field_meeting_org_logo_fid';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_meeting_org_logo_fid']['format'] = 'thumbnail_default';
  /* Field: Content: Organization (field_organization) */
  $handler->display->display_options['fields']['field_organization_url']['id'] = 'field_organization_url';
  $handler->display->display_options['fields']['field_organization_url']['table'] = 'node_data_field_organization';
  $handler->display->display_options['fields']['field_organization_url']['field'] = 'field_organization_url';
  $handler->display->display_options['fields']['field_organization_url']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_organization_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_organization_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_organization_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_organization_url']['label_type'] = 'none';
  $handler->display->display_options['pane_title'] = 'Poster Organization Header';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  );

  /* Display: Meeting Logo */
  $handler = $view->new_display('panel_pane', 'Meeting Logo', 'panel_pane_3');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Meeting Logo (field_meeting_logo) */
  $handler->display->display_options['fields']['field_meeting_logo_fid']['id'] = 'field_meeting_logo_fid';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['table'] = 'node_data_field_meeting_logo';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['field'] = 'field_meeting_logo_fid';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['relationship'] = 'group_nid';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['link_to_node'] = 0;
  $handler->display->display_options['fields']['field_meeting_logo_fid']['label_type'] = 'none';
  $handler->display->display_options['fields']['field_meeting_logo_fid']['format'] = 'thumbnail_linked';
  $handler->display->display_options['pane_title'] = 'Poster Meeting Logo';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Node: Nid',
    ),
  );

  $views[$view->name] = $view;

  return $views;
}
