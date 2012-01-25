<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function wiipod_feats_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: features
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: menu-fgtop
  $menus['menu-fgtop'] = array(
    'menu_name' => 'menu-fgtop',
    'title' => 'Wiipod Bar Menu',
    'description' => '',
  );
  // Exported menu: menu-group-menu
  $menus['menu-group-menu'] = array(
    'menu_name' => 'menu-group-menu',
    'title' => 'Group Menu',
    'description' => 'Menu for the tabs on organic group homepages. To navigate in the organic groups content',
  );
  // Exported menu: menu-projekte
  $menus['menu-projekte'] = array(
    'menu_name' => 'menu-projekte',
    'title' => 'Projekte',
    'description' => 'Alle Projekte gruppiert nach Fokusgruppen. Für die Balance Bar.',
  );
  // Exported menu: navigation
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.',
  );
  // Exported menu: primary-links
  $menus['primary-links'] = array(
    'menu_name' => 'primary-links',
    'title' => 'Hauptnavigation (oben)',
    'description' => 'Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.',
  );
  // Exported menu: secondary-links
  $menus['secondary-links'] = array(
    'menu_name' => 'secondary-links',
    'title' => 'Secondary Links',
    'description' => 'Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alle Projekte gruppiert nach Fokusgruppen. Für die Balance Bar.');
  t('Features');
  t('Group Menu');
  t('Hauptnavigation (oben)');
  t('Menu for the tabs on organic group homepages. To navigate in the organic groups content');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('Primary links are often used at the theme layer to show the major sections of a site. A typical representation for primary links would be tabs along the top.');
  t('Projekte');
  t('Secondary Links');
  t('Secondary links are often used for pages like legal notices, contact details, and other secondary navigation items that play a lesser role than primary links');
  t('The navigation menu is provided by Drupal and is the main interactive menu for any site. It is usually the only menu that contains personalized links for authenticated users, and is often not even visible to anonymous users.');
  t('Wiipod Bar Menu');


  return $menus;
}
