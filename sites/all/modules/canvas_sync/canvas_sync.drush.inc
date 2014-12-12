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
			'arguments' => array(
				'term' => 'The term to pass to the enrollment_term_id parameter',
				),
			);
	return $items;
}

function drush_sync_canvas($term) {
    _sync_courses($term);
    echo "All done\n";
}

