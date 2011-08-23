<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function do_poster_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_meeting
  $groups['meeting-group_meeting'] = array(
    'group_type' => 'standard',
    'type_name' => 'meeting',
    'group_name' => 'group_meeting',
    'label' => 'Meeting Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '142',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '142',
    'fields' => array(
      '0' => 'field_meeting_title',
      '1' => 'field_meetings_dates',
      '2' => 'field_meeting_max_posters',
      '3' => 'field_meeting_location',
      '4' => 'field_meeting_website',
      '5' => 'field_meeting_logo',
    ),
  );

  // Exported group: group_organization
  $groups['meeting-group_organization'] = array(
    'group_type' => 'standard',
    'type_name' => 'meeting',
    'group_name' => 'group_organization',
    'label' => 'Organization Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '141',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '141',
    'fields' => array(
      '0' => 'field_organization',
      '1' => 'field_meeting_org_logo',
    ),
  );

  // Exported group: group_poster_details
  $groups['meeting-group_poster_details'] = array(
    'group_type' => 'standard',
    'type_name' => 'meeting',
    'group_name' => 'group_poster_details',
    'label' => 'Poster Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '143',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '143',
    'fields' => array(
      '0' => 'field_meeting_deadline',
      '1' => 'field_meeting_abstract_max',
      '2' => 'field_meeting_poster_max_width',
      '3' => 'field_meeting_poster_max_height',
      '4' => 'field_meeting_extra_rules',
    ),
  );

  // Exported group: group_poster_credits
  $groups['poster-group_poster_credits'] = array(
    'group_type' => 'standard',
    'type_name' => 'poster',
    'group_name' => 'group_poster_credits',
    'label' => 'Credits',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '1',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '1',
    'fields' => array(
      '0' => 'field_poster_institutions',
      '1' => 'field_poster_grants',
    ),
  );

  // Exported group: group_poster_main
  $groups['poster-group_poster_main'] = array(
    'group_type' => 'standard',
    'type_name' => 'poster',
    'group_name' => 'group_poster_main',
    'label' => 'Main Details',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_poster_title',
      '1' => 'field_poster_authors',
      '2' => 'field_abstract',
    ),
  );

  // Exported group: group_poster_metadata
  $groups['poster-group_poster_metadata'] = array(
    'group_type' => 'standard',
    'type_name' => 'poster',
    'group_name' => 'group_poster_metadata',
    'label' => 'Metadata',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-2',
    'fields' => array(),
  );

  // Exported group: group_poster_poster
  $groups['poster-group_poster_poster'] = array(
    'group_type' => 'standard',
    'type_name' => 'poster',
    'group_name' => 'group_poster_poster',
    'label' => 'Poster',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '-3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_poster',
    ),
  );

  // Exported group: group_poster_status
  $groups['poster-group_poster_status'] = array(
    'group_type' => 'standard',
    'type_name' => 'poster',
    'group_name' => 'group_poster_status',
    'label' => 'Status',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '2',
        'label' => 'above',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_poster_deprecate',
      '1' => 'field_poster_latest_research',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Credits');
  t('Main Details');
  t('Meeting Details');
  t('Metadata');
  t('Organization Details');
  t('Poster');
  t('Poster Details');
  t('Status');

  return $groups;
}
