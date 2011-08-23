<?php
// $Id;

/**
 * Callback function to supply a list of content types.
 */
function do_poster_meeting_instructions_ctools_content_types() {
  return array(
    'single' => TRUE,
    'title' => t('Meeting Instruction'),
    'admin_title' => t('The meeting extra instructions'),
    'required context' => new ctools_context_required(t('Organic Group'), 'og'),
    'category' => 'Organic groups',
  );
}

/**
 * Render the description
 */
function do_poster_meeting_instructions_content_type_render($subtype, $conf, $panel_args, $context) {
  if (empty($context) || empty($context->data)) {
    return;
  }
  // Get a shortcut to the node.
  $group = $context->data;

  // Build the content type block.
  $block = new stdClass();
  $block->module  = 'meeting_instructions';
  $block->title   = $type->title_label;
  $instructions = array_shift($group->field_meeting_extra_rules);
  $block->content = check_markup($instructions['value']);
  $block->delta   = $node->nid;

  return $block;
}

/**
 * Edit form for the description content type.
 */
function do_poster_meeting_instructions_content_type_edit_form(&$form, &$form_state) {
  // Empty form to ensure we have the override title + context gadgets.
}


/**
 * Returns the administrative title for a type.
 */
function do_poster_meeting_instructions_content_type_admin_title($subtype, $conf, $context) {
  return t('Meeting Instructions');
}
