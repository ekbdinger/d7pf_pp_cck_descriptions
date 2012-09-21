<?php
/**
 * @file
 * d7pf_pp_cck_descriptions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function d7pf_pp_cck_descriptions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'pp_cck_descriptions';
  $view->description = '';
  $view->tag = 'd7, paul';
  $view->base_table = 'node';
  $view->human_name = 'pp_cck_descriptions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Description';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pp_description']['id'] = 'field_pp_description';
  $handler->display->display_options['fields']['field_pp_description']['table'] = 'field_data_field_pp_description';
  $handler->display->display_options['fields']['field_pp_description']['field'] = 'field_pp_description';
  $handler->display->display_options['fields']['field_pp_description']['label'] = '';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: PP (taxonomy_vocabulary_3) */
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['id'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['field'] = 'taxonomy_vocabulary_3_tid';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate_options']['vocabularies'] = array(
    'vocabulary_3' => 'vocabulary_3',
  );
  $handler->display->display_options['arguments']['taxonomy_vocabulary_3_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pp' => 'pp',
  );

  /* Display: Description */
  $handler = $view->new_display('page', 'Description', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'pp/descr';

  /* Display: Descripton (arg) */
  $handler = $view->new_display('page', 'Descripton (arg)', 'page_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Description */
  $handler->display->display_options['fields']['field_pp_description']['id'] = 'field_pp_description';
  $handler->display->display_options['fields']['field_pp_description']['table'] = 'field_data_field_pp_description';
  $handler->display->display_options['fields']['field_pp_description']['field'] = 'field_pp_description';
  $handler->display->display_options['fields']['field_pp_description']['label'] = '';
  $handler->display->display_options['path'] = 'pp/%/test';

  /* Display: Setup */
  $handler = $view->new_display('page', 'Setup', 'page_3');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Setup */
  $handler->display->display_options['fields']['field_pp_setup']['id'] = 'field_pp_setup';
  $handler->display->display_options['fields']['field_pp_setup']['table'] = 'field_data_field_pp_setup';
  $handler->display->display_options['fields']['field_pp_setup']['field'] = 'field_pp_setup';
  $handler->display->display_options['fields']['field_pp_setup']['label'] = '';
  $handler->display->display_options['path'] = 'pp/%/setup';

  /* Display: Security */
  $handler = $view->new_display('page', 'Security', 'page_4');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Security Attributes */
  $handler->display->display_options['fields']['field_pp_security_attributes']['id'] = 'field_pp_security_attributes';
  $handler->display->display_options['fields']['field_pp_security_attributes']['table'] = 'field_data_field_pp_security_attributes';
  $handler->display->display_options['fields']['field_pp_security_attributes']['field'] = 'field_pp_security_attributes';
  $handler->display->display_options['fields']['field_pp_security_attributes']['label'] = '';
  $handler->display->display_options['fields']['field_pp_security_attributes']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'pp/%/security';

  /* Display: Item Keys */
  $handler = $view->new_display('page', 'Item Keys', 'page_5');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Security Attributes */
  $handler->display->display_options['fields']['field_pp_security_attributes']['id'] = 'field_pp_security_attributes';
  $handler->display->display_options['fields']['field_pp_security_attributes']['table'] = 'field_data_field_pp_security_attributes';
  $handler->display->display_options['fields']['field_pp_security_attributes']['field'] = 'field_pp_security_attributes';
  $handler->display->display_options['fields']['field_pp_security_attributes']['label'] = '';
  $handler->display->display_options['fields']['field_pp_security_attributes']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'pp/%/itemkeys';

  /* Display: Primary Info */
  $handler = $view->new_display('page', 'Primary Info', 'page_6');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Primary Information */
  $handler->display->display_options['fields']['field_pp_primary_info']['id'] = 'field_pp_primary_info';
  $handler->display->display_options['fields']['field_pp_primary_info']['table'] = 'field_data_field_pp_primary_info';
  $handler->display->display_options['fields']['field_pp_primary_info']['field'] = 'field_pp_primary_info';
  $handler->display->display_options['fields']['field_pp_primary_info']['label'] = '';
  $handler->display->display_options['fields']['field_pp_primary_info']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'pp/%/primary';

  /* Display: Optional Features */
  $handler = $view->new_display('page', 'Optional Features', 'page_7');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: All taxonomy terms */
  $handler->display->display_options['fields']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['fields']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['fields']['term_node_tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['term_node_tid']['vocabularies'] = array(
    'vocabulary_2' => 0,
    'vocabulary_10' => 0,
    'vocabulary_11' => 0,
    'vocabulary_12' => 0,
    'vocabulary_5' => 0,
    'vocabulary_9' => 0,
    'vocabulary_3' => 0,
    'vocabulary_7' => 0,
    'vocabulary_8' => 0,
    'vocabulary_14' => 0,
    'vocabulary_15' => 0,
    'vocabulary_6' => 0,
  );
  /* Field: Content: PP */
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['id'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['table'] = 'field_data_taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['field'] = 'taxonomy_vocabulary_3';
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['exclude'] = TRUE;
  $handler->display->display_options['fields']['taxonomy_vocabulary_3']['delta_offset'] = '0';
  /* Field: Content: Optional Features */
  $handler->display->display_options['fields']['field_pp_optional_features']['id'] = 'field_pp_optional_features';
  $handler->display->display_options['fields']['field_pp_optional_features']['table'] = 'field_data_field_pp_optional_features';
  $handler->display->display_options['fields']['field_pp_optional_features']['field'] = 'field_pp_optional_features';
  $handler->display->display_options['fields']['field_pp_optional_features']['label'] = '';
  $handler->display->display_options['fields']['field_pp_optional_features']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 'pp/%/optional';
  $export['pp_cck_descriptions'] = $view;

  return $export;
}
