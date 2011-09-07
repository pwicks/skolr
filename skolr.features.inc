<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function skolr_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => 1);
  }
  elseif ($module == "panels_mini" && $api == "panels_default") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function skolr_imagecache_default_presets() {
  $items = array(
    'pdf-orig' => array(
      'presetname' => 'pdf-orig',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache_customactions',
          'action' => 'imagecache_customactions',
          'data' => array(
            'text' => '// not resizing, just converting to png; don\'t need $dimension
//$dimension = \'420\'; // change to your preferred size, single digit is width only (?)

if (!_imageapi_imagemagick_convert($image->source.\'[0]\', 
                                   $image->source.\'.png\')) {
  return FALSE;
} else {
  $img = imagecreatefrompng($image->source.\'.png\');
  file_delete($image->source.\'.png\');
  $image->resource = $img;
  $image->toolkit = \'imageapi_gd\';
  $image->info = array(\'extension\' => \'jpeg\');
  return TRUE;
}',
          ),
        ),
      ),
    ),
    'pdf-preview' => array(
      'presetname' => 'pdf-preview',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache_customactions',
          'action' => 'imagecache_customactions',
          'data' => array(
            'text' => '$dimension = \'420\'; // change to your preferred size, single digit is width only (?)

if (!_imageapi_imagemagick_convert($image->source.\'[0]\', 
                                   $image->source.\'.png\', 
                                   array(0 => \'-thumbnail \'.$dimension))) {
  return FALSE;
} else {
  $img = imagecreatefrompng($image->source.\'.png\');
  file_delete($image->source.\'.png\');
  $image->resource = $img;
  $image->toolkit = \'imageapi_gd\';
  $image->info = array(\'extension\' => \'jpeg\');
  return TRUE;
}',
          ),
        ),
      ),
    ),
    'pdf-thumb' => array(
      'presetname' => 'pdf-thumb',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache_customactions',
          'action' => 'imagecache_customactions',
          'data' => array(
            'text' => '$dimension = \'80x80!\'; // change to your preferred size, single digit is width only (?)

if (!_imageapi_imagemagick_convert($image->source.\'[0]\', 
                                   $image->source.\'.png\', 
                                   array(0 => \'-thumbnail \'.$dimension))) {
  return FALSE;
} else {
  $img = imagecreatefrompng($image->source.\'.png\');
  file_delete($image->source.\'.png\');
  $image->resource = $img;
  $image->toolkit = \'imageapi_gd\';
  $image->info = array(\'extension\' => \'jpeg\');
  return TRUE;
}',
          ),
        ),
      ),
    ),
    'thumbnail' => array(
      'presetname' => 'thumbnail',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '100',
            'height' => '',
            'upscale' => 0,
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function skolr_node_info() {
  $items = array(
    'meeting' => array(
      'name' => t('Conference Meeting'),
      'module' => 'features',
      'description' => t('A Conference Meeting is an organic group that contains Poster Presenters and Meeting Attendees, and in which Poster Presenters can post Conference Posters.'),
      'has_title' => '1',
      'title_label' => t('Meeting Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
    'poster' => array(
      'name' => t('Conference Poster'),
      'module' => 'features',
      'description' => t('A Conference Poster is a submission to a Conference Meeting by a Poster Presenter.  The type contains the PDF upload as well as comments from other Meeting Attendees.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function skolr_views_api() {
  return array(
    'api' => '3.0',
  );
}
