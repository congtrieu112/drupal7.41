<?php
/**
 * @file
 * kandb_context.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */

//hook_ctools_plugin_api();
function kandb_context_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
