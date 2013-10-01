<?php
/**
 * @file
 * on_edge.features.inc
 */

/**
 * Implements hook_views_api().
 */
function on_edge_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function on_edge_image_default_styles() {
  $styles = array();

  // Exported image style: before_after_photo.
  $styles['before_after_photo'] = array(
    'name' => 'before_after_photo',
    'label' => 'Before/After Photo',
    'effects' => array(
      1 => array(
        'label' => 'Crop and scale manually',
        'help' => 'Crop and scale a user-selected area, respecting the ratio of the destination width and height.',
        'effect callback' => 'manualcrop_crop_and_scale_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'manualcrop_crop_and_scale_form',
        'summary theme' => 'manualcrop_crop_and_scale_summary',
        'module' => 'manualcrop',
        'name' => 'manualcrop_crop_and_scale',
        'data' => array(
          'width' => 110,
          'height' => 220,
          'upscale' => 1,
          'respectminimum' => 1,
          'onlyscaleifcrop' => 0,
          'style_name' => 'before_after_photo',
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function on_edge_node_info() {
  $items = array(
    'highlight' => array(
      'name' => t('Highlight'),
      'base' => 'node_content',
      'description' => t('A block that appears in the Highlights & Features region.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'success_stories' => array(
      'name' => t('Success Stories'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'team_member' => array(
      'name' => t('Team Member'),
      'base' => 'node_content',
      'description' => t('Team Member bio will appear on the About Us page.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
