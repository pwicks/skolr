<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function do_poster_taxonomy_default_vocabularies() {
  return array(
    'datasets' => array(
      'name' => 'Datasets',
      'description' => '',
      'help' => 'Identify your poster\'s datasets.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_datasets',
      'weight' => '-10',
      'nodes' => array(
        'poster' => 'poster',
      ),
    ),
    'keywords' => array(
      'name' => 'Keywords',
      'description' => '',
      'help' => 'Additional keywords for your poster.',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '1',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_keywords',
      'weight' => '0',
      'nodes' => array(
        'poster' => 'poster',
      ),
    ),
  );
}
