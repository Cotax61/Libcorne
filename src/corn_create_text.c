/*
** EPITECH PROJECT, 2019
** libcorn
** File description:
** corn_create_text
*/

#include <SFML/Graphics.h>

sfText *corn_create_text(const char *str, int size, sfFont *font, sfColor color)
{
    sfText *text = sfText_create();

    if (text == NULL)
        return (NULL);
    sfText_setString(text, str);
    sfText_setFont(text, font);
    sfText_setCharacterSize(text, size);
    sfText_setColor(text, color);
    sfText_setOutlineThickness(text, 2);
    sfText_setStyle(text, sfTextBold);
    return (text);
}