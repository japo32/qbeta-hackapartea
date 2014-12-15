<?php
/**
 * @file
 * feature_node_toilet.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_node_toilet_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_node_toilet_node_info() {
  $items = array(
    'toilet' => array(
      'name' => t('Toilet'),
      'base' => 'node_content',
      'description' => t('includes all information about a toilet.'),
      'has_title' => '1',
      'title_label' => t('Toilet Name'),
      'help' => t('Your submission is subject to approval from the administrator.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
