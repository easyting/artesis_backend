<?php
/**
 * @file
 * artesis_backend_aggregation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function artesis_backend_aggregation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
