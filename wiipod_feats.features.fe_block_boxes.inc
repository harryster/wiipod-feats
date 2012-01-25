<?php

/**
 * Implementation of hook_default_fe_block_boxes().
 */
function wiipod_feats_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'frontpage_block';
  $fe_block_boxes->format = '2';
  $fe_block_boxes->machine_name = 'frontpage_block';
  $fe_block_boxes->body = '<FONT COLOR="#6EAA0A" SIZE=+4 FACE=\'Arial\'>
Wertschätzungsnetzwerke als integrierte Innovationsinstrumente 
der Personal- und Organisationsentwicklung im Demografischen Wandel
</FONT>

<a>
<img alt="WiIPOD" src="http://wiipod.dev/sites/default/files/wiipod_cover_image_0.jpg"/>					
</a>


';

  $export['frontpage_block'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Login message for anonymous users';
  $fe_block_boxes->format = '1';
  $fe_block_boxes->machine_name = 'login_message_bar';
  $fe_block_boxes->body = '<p><span style="color: #000000; font-family: Verdana, sans-serif; line-height: normal; font-size: 12px;"><a href="/user/login">Please login </a> to access all functionalities.</span></p>';

  $export['login_message_bar'] = $fe_block_boxes;

  $fe_block_boxes = new stdClass;
  $fe_block_boxes->info = 'Profile';
  $fe_block_boxes->format = '1';
  $fe_block_boxes->machine_name = 'profile';
  $fe_block_boxes->body = '';

  $export['profile'] = $fe_block_boxes;

  return $export;
}
