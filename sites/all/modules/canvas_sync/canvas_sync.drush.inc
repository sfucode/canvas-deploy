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
	$items['sync-outline'] = array(
			'description' => 'Synchronize wih course outlines api',
			'callback' => 'drush_sync_outlines',
			'arguments' => array(
				'term' => 'Term to pass to the function',
				),
			);
	$items['sync'] = array(
			'description' => 'Sync all course information',
			'callback' => 'drush_sync_all',
			'arguments' => array(
				'term' => 'Term to pass to the function',
				),
			);
	return $items;
}

function drush_sync_canvas($term) { // four digit term code '1131'
    _sync_courses($term);
    echo "All done\n";
}

function drush_sync_outlines($term) { // four digit term code '1147'
    _sync_outline($term);
    echo "All done\n";
}

function drush_sync_all($term) { // four digit term code '1147'
    _sync_courses($term);
    echo "All done with Canvas API\n";
    _sync_outline($term);
    echo "All done with Course Outline API\n";
}
