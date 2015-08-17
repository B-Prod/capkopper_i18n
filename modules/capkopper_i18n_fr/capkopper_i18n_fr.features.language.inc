<?php
/**
 * @file
 * capkopper_i18n_fr.features.language.inc
 */

/**
 * Implements hook_locale_default_languages().
 */
function capkopper_i18n_fr_locale_default_languages() {
  $languages = array();

  // Exported language: fr.
  $languages['fr'] = array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 2,
    'formula' => '($n!=1)',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -10,
  );
  return $languages;
}
