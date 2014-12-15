<?php
/**
 * @file
 * features_mapping_basic_mapping.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_mapping_basic_mapping_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "openlayers" && $api == "openlayers_maps") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function features_mapping_basic_mapping_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
