/*
** EPITECH PROJECT, 2019
** libcorn
** File description:
** corn_move_rect
*/

#include <SFML/Graphics.h>

void corn_move_rect(sfIntRect *rect, int move, int maximum)
{
    rect->left += move;
    if (rect->left > maximum)
        rect->left = 0;
}