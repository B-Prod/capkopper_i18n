<?php
/**
 * @file
 * capkopper_i18n_en.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function capkopper_i18n_en_locale_default_languages() {
  $languages = array();

  // Exported language: en.
  $languages['en'] = array(
    'language' => 'en',
    'name' => 'English',
    'native' => 'English',
    'direction' => 0,
    'enabled' => 0,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'en',
    'weight' => -9,
  );
  return $languages;
}
