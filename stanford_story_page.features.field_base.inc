<?php
/**
 * @file
 * stanford_story_page.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function stanford_story_page_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_s_story_paragraph'.
  $field_bases['field_s_story_paragraph'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_s_story_paragraph',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'paragraphs',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'paragraphs',
  );

  return $field_bases;
}
