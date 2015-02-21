<?php

const COMMAND_NAME = 'link_lister';
const DESCRIPTION = 'A link lister command';
const ALIAS = 'll';

/**
 * Created by Hatim Jacquir
 * @author : Hatim Jacquir <jacquirhatim@gmail.com>
 */

/**
 * @implements hook_drush_command()
 *
 * @return array
 */
function link_lister_drush_command()
{
    $items[COMMAND_NAME] = array(
        'description' => DESCRIPTION,
        'aliases' => array(
            ALIAS,
        ),
    );

    return $items;
}

/**
 * @return string
 */
function drush_link_lister()
{
    link_lister_list();
}