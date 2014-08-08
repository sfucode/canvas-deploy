#!/bin/bash

drush delete-all eval_course_offering
drush sync-canvas
