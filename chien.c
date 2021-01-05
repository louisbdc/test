/*
** EPITECH PROJECT, 2020
** chien
** File description:
** chien
*/

#include "my_hunter.h"
#include <SFML/Graphics.h>
#include <SFML/System.h>

int var_chien = 0;
int test = 285;

int chien(t_hunter chien)
{
    sfIntRect cutchien = sfSprite_getTextureRect(chien.spritechien);

    cutchien.top = 0;
    cutchien.left += 285;
    if (cutchien.left == 1425)
        cutchien.left = 0;
    cutchien.height = 250;
    cutchien.width = 300;

    sfVector2f position = {var_chien, 500};
    var_chien = var_chien + 20;
    if (var_chien > 500)
    {
        chien2(chien);
        return 0;
    }
    sfSprite_setPosition(chien.spritechien, position);
    sfSprite_setTextureRect(chien.spritechien, cutchien);
    return 0;
}

int chien2(t_hunter chien2)
{
    sfIntRect cutchien2 = sfSprite_getTextureRect(chien2.spritechien);

    cutchien2.top = 250;
    /*chien2.clock = sfClock_create();
    while (test != 10) {
        chien2.time = sfClock_getElapsedTime(chien2.clock);
        chien2.seconds = chien2.time.microseconds / 1000000.0;
        if (chien2.seconds > 1.0) {
            sfClock_restart(chien2.clock);
        }
    }*/
    cutchien2.left += test;
    if (cutchien2.left > 855) {
        test = -1000;
        return 0;
    }
    cutchien2.height = 250;
    cutchien2.width = 300;
    sfSprite_setTextureRect(chien2.spritechien, cutchien2);
    return 0;
}