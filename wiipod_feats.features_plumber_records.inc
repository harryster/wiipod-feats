<?php

/**
 * Implementation of hook_features_plumber_defaults().
 */
function wiipod_feats_features_plumber_defaults() {
  $export = array();

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'wiipod_feats__variable__comment_anonymous_balancewiki';
  $features_plumber_record->feature = 'wiipod_feats';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_anonymous_balancewiki';
  $export['wiipod_feats__variable__comment_anonymous_balancewiki'] = $features_plumber_record;

  $features_plumber_record = new stdClass;
  $features_plumber_record->disabled = FALSE; /* Edit this to true to make a default features_plumber_record disabled initially */
  $features_plumber_record->api_version = 1;
  $features_plumber_record->name = 'wiipod_feats__variable__comment_anonymous_conftoolgroup';
  $features_plumber_record->feature = 'wiipod_feats';
  $features_plumber_record->component = 'variable';
  $features_plumber_record->component_val = 'comment_anonymous_conftoolgroup';
  $export['wiipod_feats__variable__comment_anonymous_conftoolgroup'] = $features_plumber_record;

  return $export;
}
