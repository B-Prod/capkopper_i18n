<?php
/**
 * @file
 * capkopper_i18n_fr.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function capkopper_i18n_fr_defaultconfig_features() {
  return array(
    'capkopper_i18n_fr' => array(
      'strongarm' => 'strongarm',
    ),
  );
}

/**
 * Implements hook_defaultconfig_strongarm().
 */
function capkopper_i18n_fr_defaultconfig_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_panopoly_page_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_node_panopoly_page_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_taxonomy_term_panopoly_categories_fr_pattern';
  $strongarm->value = '';
  $export['pathauto_taxonomy_term_panopoly_categories_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_user_user_fr_pattern';
  $strongarm->value = 'profil/[user:name]';
  $export['pathauto_user_user_fr_pattern'] = $strongarm;

  return $export;
}
