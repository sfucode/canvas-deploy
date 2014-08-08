<?php
/**
 * @file
 * term_and_course_offering_content.features.inc
 */

/**
 * Implements hook_node_info().
 */
function term_and_course_offering_content_node_info() {
  $items = array(
    'eval_course_offering' => array(
      'name' => t('Course offering'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'eval_term' => array(
      'name' => t('Term'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
