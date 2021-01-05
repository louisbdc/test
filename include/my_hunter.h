/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** include file
*/

#ifndef _MY_H_
#define _MY_H_

#include <SFML/Graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include <SFML/System.h>
#include <SFML/Window/Keyboard.h>
#include <SFML/Window/Mouse.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>

typedef struct hunter
{
    sfRenderWindow *window;
    sfSprite *spritebackground;
    sfSprite *spritecanard_rx;
    sfSprite *spritechien;
    sfSprite *spriteviseur;
    sfSprite *spritecanard_mort;
    sfTexture *texturebackground;
    sfTexture *texturecanard_rx;
    sfTexture *texture_oiseau_chien;
    sfTexture* textureviseur;
    sfVector2f positioncanard;
    sfVector2f positionviseur;
    sfVideoMode video_mode;
    sfEvent event;
    sfMouseButton *button;
} t_hunter;

typedef struct time
{
    sfClock *clock;
    sfTime time;
    float seconds;
} t_time;

int mainloop(t_hunter loop);
int canard_rx(t_hunter canard);
int chien(t_hunter chien);
int chien2(t_hunter chien2);
int mouse(t_hunter mouse);
int canard_mort(t_hunter canard_mt);

#endif