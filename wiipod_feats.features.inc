<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function wiipod_feats_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "features_plumber" && $api == "features_plumber_records") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function wiipod_feats_imagecache_default_presets() {
  $items = array(
    'frontvisual-10c-gr' => array(
      'presetname' => 'frontvisual-10c-gr',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_deprecated_scale',
          'data' => array(
            'fit' => 'outside',
            'width' => '200',
            'height' => '150',
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '200',
            'height' => '150',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function wiipod_feats_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Event'),
      'module' => 'features',
      'description' => t('Events have a start date and an optional end date as well as a teaser and a body. They can be extended by other modules, too.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'page' => array(
      'name' => t('Page'),
      'module' => 'features',
      'description' => t('A <em>page</em>, similar in form to a <em>story</em>, is a simple method for creating and displaying information that rarely changes, such as an "About us" section of a website. By default, a <em>page</em> entry does not allow visitor comments and is not featured on the site\'s initial home page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'simplenews' => array(
      'name' => t('Newsletter issue'),
      'module' => 'features',
      'description' => t('A newsletter issue to be sent to subscribed email addresses.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'story' => array(
      'name' => t('Story'),
      'module' => 'features',
      'description' => t('A <em>story</em>, similar in form to a <em>page</em>, is ideal for creating and displaying content that informs or engages website visitors. Press releases, site announcements, and informal blog-like entries may all be created with a <em>story</em> entry. By default, a <em>story</em> entry is automatically featured on the site\'s initial home page, and provides the ability to post comments.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function wiipod_feats_views_api() {
  return array(
    'api' => '2',
  );
}
