#!/bin/bash

cd $HOME/html/sites/all/modules/stanford/stanford_paragraph_types
git checkout 7.x-1.x

drush @local en -y stanford_paragraph_types stanford_story_page