<?php
/**
 * @file
 * features_mapping_basic_mapping.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function features_mapping_basic_mapping_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'geofield_formatter_map_2';
  $openlayers_maps->title = 'Geofield Formatter Map Qubeta';
  $openlayers_maps->description = 'A Map Used for Geofield Output';
  $openlayers_maps->data = array(
    'width' => '100%',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '122.6953124564625, 13.025965945045009',
        'zoom' => '5',
      ),
      'restrict' => array(
        'restrictextent' => 1,
        'restrictedExtent' => '12220140.581419,539110.362799,15096618.829331,2417626.769599',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 1,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'qubeta_map_openlayers_1' => 'qubeta_map_openlayers_1',
          'geofield_formatter' => 0,
        ),
        'popupAtPosition' => 'mouse',
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
      'openlayers_behavior_zoomtolayer' => array(
        'zoomtolayer' => array(
          'qubeta_map_openlayers_1' => 'qubeta_map_openlayers_1',
          'geofield_formatter' => 'geofield_formatter',
          'mapquest_osm' => 0,
        ),
        'point_zoom_level' => '12',
        'zoomtolayer_scale' => '1',
      ),
    ),
    'default_layer' => 'mapquest_osm',
    'layers' => array(
      'mapquest_osm' => 'mapquest_osm',
      'geofield_formatter' => 'geofield_formatter',
      'qubeta_map_openlayers_1' => 'qubeta_map_openlayers_1',
    ),
    'layer_weight' => array(
      'geofield_formatter' => '0',
      'qubeta_map_openlayers_1' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
    ),
    'layer_styles' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'qubeta_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles_select' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'qubeta_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles_temporary' => array(
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'qubeta_map_openlayers_1' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_activated' => array(
      'qubeta_map_openlayers_1' => 'qubeta_map_openlayers_1',
      'geofield_formatter' => 'geofield_formatter',
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
    ),
    'layer_switcher' => array(
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'qubeta_map_openlayers_1' => 0,
    ),
    'projection' => 'EPSG:900913',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'default',
      'select' => 'default',
      'temporary' => 'default',
    ),
  );
  $export['geofield_formatter_map_2'] = $openlayers_maps;

  return $export;
}
