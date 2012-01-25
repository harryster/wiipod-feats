<?php

/**
 * Implementation of hook_default_fe_block_settings().
 */
function wiipod_feats_default_fe_block_settings() {
  $export = array();

  // balance
  $theme = array();

  $theme['block-profile'] = array(
    'module' => 'block',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-28',
    'region' => 'balance_bar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Profile',
    'cache' => '-1',
    'machine_name' => 'profile',
  );

  $theme['block-frontpage_block'] = array(
    'module' => 'block',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '0',
    'region' => 'content_top',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'frontpage_block',
  );

  $theme['block-login_message_bar'] = array(
    'module' => 'block',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '0',
    'region' => 'balance_bar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
    'machine_name' => 'login_message_bar',
  );

  $theme['event-1'] = array(
    'module' => 'event',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-22',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['focus_groups-0'] = array(
    'module' => 'focus_groups',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-24',
    'region' => 'right',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['masquerade-0'] = array(
    'module' => 'masquerade',
    'delta' => '0',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-10',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-fgtop'] = array(
    'module' => 'menu',
    'delta' => 'menu-fgtop',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-22',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-group-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-group-menu',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-23',
    'region' => 'project_sidebar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-projekte'] = array(
    'module' => 'menu',
    'delta' => 'menu-projekte',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-5',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-26',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-25',
    'region' => 'footer',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-27',
    'region' => 'balance_bar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<n',
    'cache' => '-1',
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-26',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['og-0'] = array(
    'module' => 'og',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-15',
    'region' => 'project_sidebar',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og-3'] = array(
    'module' => 'og',
    'delta' => '3',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-8',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '2',
  );

  $theme['og_views-0'] = array(
    'module' => 'og_views',
    'delta' => '0',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-12',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_views-1'] = array(
    'module' => 'og_views',
    'delta' => '1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-13',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-25',
    'region' => 'header',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['user-0'] = array(
    'module' => 'user',
    'delta' => '0',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '-27',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-21',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-15',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-14',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_my-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_my-block_1',
    'theme' => 'balance',
    'status' => 0,
    'weight' => '-9',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-partner_organizations-block_1'] = array(
    'module' => 'views',
    'delta' => 'partner_organizations-block_1',
    'theme' => 'balance',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Partner Organizations',
    'cache' => '-1',
  );

  $export['balance'] = $theme;

  // rubik
  $theme = array();

  $theme['block-profile'] = array(
    'module' => 'block',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Profile',
    'cache' => '-1',
    'machine_name' => 'profile',
  );

  $theme['block-frontpage_block'] = array(
    'module' => 'block',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'frontpage_block',
  );

  $theme['block-login_message_bar'] = array(
    'module' => 'block',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
    'machine_name' => 'login_message_bar',
  );

  $theme['event-1'] = array(
    'module' => 'event',
    'delta' => '1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['focus_groups-0'] = array(
    'module' => 'focus_groups',
    'delta' => '0',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['masquerade-0'] = array(
    'module' => 'masquerade',
    'delta' => '0',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-fgtop'] = array(
    'module' => 'menu',
    'delta' => 'menu-fgtop',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-group-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-group-menu',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-projekte'] = array(
    'module' => 'menu',
    'delta' => 'menu-projekte',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<n',
    'cache' => '-1',
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['og-0'] = array(
    'module' => 'og',
    'delta' => '0',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og-3'] = array(
    'module' => 'og',
    'delta' => '3',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '2',
  );

  $theme['og_views-0'] = array(
    'module' => 'og_views',
    'delta' => '0',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_views-1'] = array(
    'module' => 'og_views',
    'delta' => '1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['user-0'] = array(
    'module' => 'user',
    'delta' => '0',
    'theme' => 'rubik',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'rubik',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block_1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_my-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_my-block_1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-partner_organizations-block_1'] = array(
    'module' => 'views',
    'delta' => 'partner_organizations-block_1',
    'theme' => 'rubik',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['rubik'] = $theme;

  // garland
  $theme = array();

  $theme['block-profile'] = array(
    'module' => 'block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => 'Profile',
    'cache' => '-1',
    'machine_name' => 'profile',
  );

  $theme['block-frontpage_block'] = array(
    'module' => 'block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '-1',
    'machine_name' => 'frontpage_block',
  );

  $theme['block-login_message_bar'] = array(
    'module' => 'block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
    'machine_name' => 'login_message_bar',
  );

  $theme['event-1'] = array(
    'module' => 'event',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '1',
    'pages' => '<front>',
    'title' => '',
    'cache' => '1',
  );

  $theme['focus_groups-0'] = array(
    'module' => 'focus_groups',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $theme['masquerade-0'] = array(
    'module' => 'masquerade',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-fgtop'] = array(
    'module' => 'menu',
    'delta' => 'menu-fgtop',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-menu-group-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-group-menu',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-menu-projekte'] = array(
    'module' => 'menu',
    'delta' => 'menu-projekte',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['menu-primary-links'] = array(
    'module' => 'menu',
    'delta' => 'primary-links',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu-secondary-links'] = array(
    'module' => 'menu',
    'delta' => 'secondary-links',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu_block-1'] = array(
    'module' => 'menu_block',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['menu_block-2'] = array(
    'module' => 'menu_block',
    'delta' => '2',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<n',
    'cache' => '-1',
  );

  $theme['nice_menus-1'] = array(
    'module' => 'nice_menus',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['og-0'] = array(
    'module' => 'og',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og-3'] = array(
    'module' => 'og',
    'delta' => '3',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '2',
  );

  $theme['og_views-0'] = array(
    'module' => 'og_views',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['og_views-1'] = array(
    'module' => 'og_views',
    'delta' => '1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['search-0'] = array(
    'module' => 'search',
    'delta' => '0',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => '-1',
  );

  $theme['user-0'] = array(
    'module' => 'user',
    'delta' => '0',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['user-1'] = array(
    'module' => 'user',
    'delta' => '1',
    'theme' => 'garland',
    'status' => '1',
    'weight' => '0',
    'region' => 'left',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_members_block-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_members_block-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-og_my-block_1'] = array(
    'module' => 'views',
    'delta' => 'og_my-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['views-partner_organizations-block_1'] = array(
    'module' => 'views',
    'delta' => 'partner_organizations-block_1',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'throttle' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $export['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
