/*
** EPITECH PROJECT, 2020
** canard
** File description:
** roux
*/

#include "my_hunter.h"
#include <SFML/Graphics.h>

#define randnum(min, max) \
        ((rand() % (int)(((max) + 1) - (min))) + (min))

int a = 0;
int b = 100;

int canard_rx(t_hunter canard)
{
    sfIntRect cutcanard_rx = sfSprite_getTextureRect(canard.spritecanard_rx);
    cutcanard_rx.top = 0;
    cutcanard_rx.left += 110;
    if (cutcanard_rx.left == 330)
        cutcanard_rx.left = 0;
    cutcanard_rx.height = 110;
    cutcanard_rx.width = 110;

    sfVector2f position = {a, b};
    a = a + 10;
    if (a == 1280)
    {
        a = 0;
        b = randnum(0, 350);
    }

    sfSprite_setPosition(canard.spritecanard_rx, position);
    sfSprite_setTextureRect(canard.spritecanard_rx, cutcanard_rx);
    return 0;
}

int canard_mort(t_hunter canard_mt)
{
    sfIntRect cutcanard_mort = sfSprite_getTextureRect(canard_mt.
    spritecanard_mort);
    cutcanard_mort.top = 1100;
    cutcanard_mort.left = 1200;
    cutcanard_mort.height = 166;
    cutcanard_mort.width = 250;

    canard_mt.positioncanard.x = a - 80;
    canard_mt.positioncanard.y = b - 50;

    sfSprite_setPosition(canard_mt.spritecanard_mort, canard_mt.positioncanard);
    sfSprite_setTextureRect(canard_mt.spritecanard_mort, cutcanard_mort);
    sfRenderWindow_drawSprite(canard_mt.window, canard_mt.spritecanard_mort,
    NULL);
    return 0;
}