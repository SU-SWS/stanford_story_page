<?php
/**
 * @file
 * stanford_story_page.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_story_page_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance:
  // 'node-stanford_story_page-field_s_story_paragraph'.
  $field_instances['node-stanford_story_page-field_s_story_paragraph'] = array(
    'bundle' => 'stanford_story_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_story_paragraph',
    'label' => 'Paragraph',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        'paragraphs_pack_content' => -1,
        'paragraphs_pack_juicebox' => -1,
        'paragraphs_pack_node_list' => 'paragraphs_pack_node_list',
        'paragraphs_pack_taxonomy_list' => 'paragraphs_pack_taxonomy_list',
        'stanford_block' => 'stanford_block',
        'stanford_gallery' => 'stanford_gallery',
        'stanford_image' => 'stanford_image',
        'stanford_pull_quote' => 'stanford_pull_quote',
        'stanford_table_data' => 'stanford_table_data',
        'stanford_video' => 'stanford_video',
        'stanford_wysiwyg' => 'stanford_wysiwyg',
      ),
      'bundle_weights' => array(
        'paragraphs_pack_content' => 2,
        'paragraphs_pack_juicebox' => 3,
        'paragraphs_pack_node_list' => 4,
        'paragraphs_pack_taxonomy_list' => 5,
        'stanford_block' => 17,
        'stanford_gallery' => 6,
        'stanford_image' => 7,
        'stanford_pull_quote' => 8,
        'stanford_table_data' => 9,
        'stanford_video' => 10,
        'stanford_wysiwyg' => 11,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Paragraph');

  return $field_instances;
}
