<?php
/**
 * @file
 * feature_node_toilet.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function feature_node_toilet_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_rating|node|toilet|form';
  $field_group->group_name = 'group_rating';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'toilet';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rating',
    'weight' => '6',
    'children' => array(
      0 => 'field_cleanliness',
      1 => 'field_foot_traffic',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-rating field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_rating|node|toilet|form'] = $field_group;

  return $export;
}
