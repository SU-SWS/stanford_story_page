#!/bin/bash

export PATH="$HOME/.composer/vendor/bin:$PATH"

rm -rf $HOME/html/sites/all/modules/stanford/stanford_paragraph_types
git clone -b 7.x-1.x https://github.com/SU-SWS/stanford_paragraph_types.git $HOME/html/sites/all/modules/stanford/stanford_paragraph_types
drush @local en stanford_story_page -y