<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function wiipod_feats_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation:admin/build/menu
  $menu_links['navigation:admin/build/menu'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/build/menu',
    'router_path' => 'admin/build/menu',
    'link_title' => 'Menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Control your site\'s navigation menu, primary links and secondary links, as well as rename and reorganize menu items.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/build',
  );
  // Exported menu link: navigation:admin/settings/menu_block
  $menu_links['navigation:admin/settings/menu_block'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/settings/menu_block',
    'router_path' => 'admin/settings/menu_block',
    'link_title' => 'Menu block',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure menu block.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: navigation:admin/settings/nice_menus
  $menu_links['navigation:admin/settings/nice_menus'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'admin/settings/nice_menus',
    'router_path' => 'admin/settings/nice_menus',
    'link_title' => 'Nice menus',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure Nice menus.',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/settings',
  );
  // Exported menu link: primary-links:<front>
  $menu_links['primary-links:<front>'] = array(
    'menu_name' => 'primary-links',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-home',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: primary-links:http://drupal.org
  $menu_links['primary-links:http://drupal.org'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'http://drupal.org',
    'router_path' => '',
    'link_title' => 'Events',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: primary-links:node/2
  $menu_links['primary-links:node/2'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'Service',
    'options' => array(
      'attributes' => array(
        'id' => 'menu-service',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: primary-links:node/3
  $menu_links['primary-links:node/3'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'node/3',
    'router_path' => 'node/%',
    'link_title' => 'Downloads',
    'options' => array(
      'attributes' => array(
        'title' => 'Veranstaltungen',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => 'node/2',
  );
  // Exported menu link: secondary-links:http://drupal.org
  $menu_links['secondary-links:http://drupal.org'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'http://drupal.org',
    'router_path' => '',
    'link_title' => 'Terms & Conditions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: secondary-links:node/12
  $menu_links['secondary-links:node/12'] = array(
    'menu_name' => 'secondary-links',
    'link_path' => 'node/12',
    'router_path' => 'node/%',
    'link_title' => 'Impressum',
    'options' => array(
      'attributes' => array(
        'title' => 'Impressum',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '11',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Downloads');
  t('Events');
  t('Home');
  t('Impressum');
  t('Menu block');
  t('Menus');
  t('Nice menus');
  t('Service');
  t('Terms & Conditions');


  return $menu_links;
}
