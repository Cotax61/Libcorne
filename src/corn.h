/*
** EPITECH PROJECT, 2019
** libcorn
** File description:
** corn.h
*/

#ifndef CORN_H
#define CORN_H

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

int corn_check_clock(sfClock *clock, float time, sfBool restart);
void corn_move_rect(sfIntRect *rect, int move, int maximum);
sfMusic *corn_load_sound(const char *path, float volume, float pitch);
sfText *corn_create_text(const char *str, int size, sfFont *font, sfColor color);
void corn_apply_gravity(sfSprite *sprite, float g_force, float *speed);

#endif