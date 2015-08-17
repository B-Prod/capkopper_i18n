<?php
/**
 * @file
 * capkopper_i18n_en.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function capkopper_i18n_en_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_fe_date_locale_date_format().
 */
function capkopper_i18n_en_fe_date_locale_date_format() {
  $locale_date_formats = array();

  // Exported format: long::en
  $locale_date_formats['long::en'] = array(
    'type' => 'long',
    'format' => 'l, F j, Y - g:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: medium::en
  $locale_date_formats['medium::en'] = array(
    'type' => 'medium',
    'format' => 'F j, Y - g:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: panopoly_day::en
  $locale_date_formats['panopoly_day::en'] = array(
    'type' => 'panopoly_day',
    'format' => 'F j, Y',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: panopoly_time::en
  $locale_date_formats['panopoly_time::en'] = array(
    'type' => 'panopoly_time',
    'format' => 'g:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  // Exported format: short::en
  $locale_date_formats['short::en'] = array(
    'type' => 'short',
    'format' => 'd/m/Y - g:ia',
    'locales' => array(
      0 => 'en',
    ),
  );
  return $locale_date_formats;
}
