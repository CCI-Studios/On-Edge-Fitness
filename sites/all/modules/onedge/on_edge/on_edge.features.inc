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
 * Implements hook_node_info().
 */
function on_edge_node_info() {
  $items = array(
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
  drupal_alter('node_info', $items);
  return $items;
}
