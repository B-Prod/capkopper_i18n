<?php
/**
 * @file
 * capkopper_i18n_fr.variable.inc
 */

/**
 * Implements hook_variable_realm_default_variables().
 */
function capkopper_i18n_fr_variable_realm_default_variables() {
$realm_variables = array();
  $realm_variables['language']['fr'] = array(
  'anonymous' => 'Anonyme',
  'site_name' => 'capKopper',
  'site_slogan' => 'capKopper',
  'user_mail_cancel_confirm_body' => '[user:name],

Une demande d\'annulation de votre compte a été faite sur [site:name].

Vous pouvez maintenant annuler votre compte sur [site:url-brief] en cliquant sur ce lien ou en le copiant dans votre navigateur :

[user:cancel-url]

REMARQUE : L\'annulation de votre compte n\'est pas reversible.

Ce lien expirera après un jour et rien ne se passera s\'il n\'est pas utilisé.

--  L\'équipe [site:name]',
  'user_mail_cancel_confirm_subject' => 'Demande d\'annulation de compte pour [user:name] sur [site:name]',
  'user_mail_password_reset_body' => '[user:name],

Une demande de renouvellement de mot de passe a été faite pour votre compte sur [site:name].

Vous pouvez désormais vous identifier en cliquant sur ce lien ou en le copiant dans votre navigateur :

[user:one-time-login-url]

Ce lien ne peut être utilisé pour s\'identifier qu\'une seule fois et il vous conduira à une page où vous pourrez paramétrer votre mot de passe. Il expirera après un jour et rien ne se passera s\'il n\'est pas utilisé.

--  L\'équipe [site:name]',
  'user_mail_password_reset_subject' => 'Informations de remplacement de connexion pour [user:name] sur [site:name]',
  'user_mail_register_admin_created_body' => '[user:name],

Un administrateur du site [site:name] vous a créé un compte. Vous pouvez désormais vous identifier en cliquant sur ce lien ou en le copiant dans votre navigateur :

[user:one-time-login-url]

Ce lien ne peut être utilisé pour s\'identifier qu\'une seule fois et il vous conduira à une page où vous pourrez paramétrer votre mot de passe.

Après avoir paramétré votre mot de passe, vous pourrez vous identifier à l\'adresse [site:login-url] lors de vos prochaines connexions :

identifiant : [user:mail]
mot de passe : Votre mot de passe

--  L\'équipe [site:name]',
  'user_mail_register_admin_created_subject' => 'Un administrateur a créé un compte pour vous sur [site:name]',
  'user_mail_register_no_approval_required_body' => '[user:name],

Merci de vous être enregistré sur [site:name]. Vous pouvez désormais vous identifier en cliquant sur ce lien ou en le copiant dans votre navigateur :

[user:one-time-login-url]

Ce lien ne peut être utilisé pour s\'identifier qu\'une seule fois et il vous conduira à une page où vous pourrez paramétrer votre mot de passe.

Après avoir paramétré votre mot de passe, vous pourrez vous identifier à l\'adresse [site:login-url] lors de vos prochaines connexions :

identifiant : [user:mail]
mot de passe : Votre mot de passe

--  L\'équipe [site:name]',
  'user_mail_register_no_approval_required_subject' => 'Détails du compte [user:name] sur [site:name]',
  'user_mail_register_pending_approval_body' => '[user:name],

Merci pour votre inscription sur [site:name]. Votre demande de compte est actuellement en attente d\'approbation. Quand elle aura été acceptée, vous recevrez un autre courriel contenant les informations pour vous connecter, définir votre mot de passe et d\'autres détails.


--  L\'équipe [site:name]',
  'user_mail_register_pending_approval_subject' => 'Détails du compte [user:name] sur [site:name] (en attente d\'approbation)',
  'user_mail_status_activated_body' => '[user:name],

Votre compte sur [site:name] a été activé.

Vous pouvez désormais vous identifier en cliquant sur ce lien ou en le copiant dans votre navigateur :

[user:one-time-login-url]

Ce lien ne peut être utilisé pour s\'identifier qu\'une seule fois et il vous conduira à une page où vous pourrez paramétrer votre mot de passe.

Après avoir paramétré votre mot de passe, vous pourrez vous identifier à l\'adresse [site:login-url] lors de vos prochaines connexions :

identifiant : [user:mail]
mot de passe : Votre mot de passe

--  L\'équipe [site:name]',
  'user_mail_status_activated_subject' => 'Détails du compte [user:name] sur [site:name] (approuvé)',
  'user_mail_status_blocked_body' => '[user:name],

Votre compte sur [site:name] a été bloqué.

--  L\'équipe de [site:name]',
  'user_mail_status_blocked_subject' => 'Détails du compte [user:name] sur [site:name] (bloqué)',
  'user_mail_status_canceled_body' => '[user:name],

Votre compte sur [site:name] a été annulé.

--  L\'équipe [site:name]',
  'user_mail_status_canceled_subject' => 'Détails du compte [user:name] sur [site:name] (annulé)',
);

return $realm_variables;
}
