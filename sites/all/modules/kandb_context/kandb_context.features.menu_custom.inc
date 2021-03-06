<?php
/**
 * @file
 * kandb_context.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function kandb_context_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-footer.
  $menus['menu-footer'] = array(
    'menu_name' => 'menu-footer',
    'title' => 'Footer',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Footer');


  return $menus;
}
