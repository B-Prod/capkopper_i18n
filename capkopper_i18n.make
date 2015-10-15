; capKoper Internationalization Makefile

api = 2
core = 7.x

; Features Extra
projects[features_extra][type] = "module"
projects[features_extra][subdir] = "contrib"
projects[features_extra][download][type] = "git"
projects[features_extra][download][url] = "http://git.drupal.org/project/features_extra.git"
projects[features_extra][download][branch] = "7.x-1.x"
projects[features_extra][download][revision] = "dcf9ad9"

; Internationalization
projects[i18n][version] = 1.13
projects[i18n][subdir] = contrib

; i18n Views
projects[i18nviews][type] = "module"
projects[i18nviews][subdir] = "contrib"
projects[i18nviews][download][type] = "git"
projects[i18nviews][download][url] = "http://git.drupal.org/project/i18nviews.git"
projects[i18nviews][download][branch] = "7.x-3.x"
projects[i18nviews][download][revision] = "27e9809"

; Pathauto i18n
projects[pathauto_i18n][version] = 1.4
projects[pathauto_i18n][subdir] = contrib

projects[pathauto_i18n][patch][2387805] = https://www.drupal.org/files/issues/pathauto_i18n-do-not-clear-context-variable-2387805-1.patch

; Localization Update
projects[l10n_update][type] = "module"
projects[l10n_update][subdir] = "contrib"
projects[l10n_update][version] = "1.1"

; Variable
projects[variable][version] = 2.5
projects[variable][subdir] = contrib
