<?php
/**
 * @file
 * capkopper_i18n_fr.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function capkopper_i18n_fr_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_custom_date_formats().
 */
function capkopper_i18n_fr_fe_date_custom_date_formats() {
  $custom_date_formats = array();
  $custom_date_formats['H:i'] = 'H:i';
  $custom_date_formats['d/m/Y - H:i'] = 'd/m/Y - H:i';
  $custom_date_formats['j F Y'] = 'j F Y';
  $custom_date_formats['j F Y - H:i'] = 'j F Y - H:i';
  $custom_date_formats['l j F Y - H:i'] = 'l j F Y - H:i';
  return $custom_date_formats;
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function capkopper_i18n_fr_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: long::fr
  $locale_date_formats['long::fr'] = array(
    'type' => 'long',
    'format' => 'l j F Y - H:i',
    'locales' => array(
      0 => 'fr',
    ),
  );
  // Exported format: medium::fr
  $locale_date_formats['medium::fr'] = array(
    'type' => 'medium',
    'format' => 'j F Y - H:i',
    'locales' => array(
      0 => 'fr',
    ),
  );
  // Exported format: panopoly_day::fr
  $locale_date_formats['panopoly_day::fr'] = array(
    'type' => 'panopoly_day',
    'format' => 'j F Y',
    'locales' => array(
      0 => 'fr',
    ),
  );
  // Exported format: panopoly_time::fr
  $locale_date_formats['panopoly_time::fr'] = array(
    'type' => 'panopoly_time',
    'format' => 'H:i',
    'locales' => array(
      0 => 'fr',
    ),
  );
  // Exported format: short::fr
  $locale_date_formats['short::fr'] = array(
    'type' => 'short',
    'format' => 'd/m/Y - H:i',
    'locales' => array(
      0 => 'fr',
    ),
  );
  return $locale_date_formats;
}
