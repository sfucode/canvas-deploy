<?php
/**
 * Implementation of hook_drush_command().
 */
function canvas_sync_drush_command() {
  $items = array();
  // Name of the drush command.
  $items['sync-canvas'] = array(
    'description' => 'Synchronize canvas courses',
    'callback' => 'drush_sync_canvas',
  );
  return $items;
}

function drush_sync_canvas() {
    _sync_courses();
    echo "All done\n";
}

