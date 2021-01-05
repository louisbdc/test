/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my_hunter.h"
#include <SFML/Graphics.h>

sfRenderWindow *createwindow(unsigned int width, unsigned int height,
t_hunter game)
{
    game.video_mode.width = width;
    game.video_mode.height = height;
    game.video_mode.bitsPerPixel = 32;
    game.window = sfRenderWindow_create(game.video_mode, "My_hunter",
    sfResize | sfClose, NULL);
    return (game.window);
}

int main(void)
{
    t_hunter game;

    game.window = createwindow(1280, 769, game);
    sfRenderWindow_setFramerateLimit(game.window, 20);
    game.texturebackground = sfTexture_createFromFile("background.png", NULL);
    game.texturecanard_rx = sfTexture_createFromFile("oiseau_roux.png", NULL);
    game.texture_oiseau_chien = sfTexture_createFromFile("triangle.png", NULL);
    game.textureviseur = sfTexture_createFromFile("viseur.png", NULL);
    game.spritecanard_mort = sfSprite_create();
    sfSprite_setTexture(game.spritecanard_mort, game.texture_oiseau_chien,
    sfTrue);
    game.spritebackground = sfSprite_create();
    sfSprite_setTexture(game.spritebackground, game.texturebackground, sfTrue);
    game.spritecanard_rx = sfSprite_create();
    sfSprite_setTexture(game.spritecanard_rx, game.texturecanard_rx, sfTrue);
    game.spritechien = sfSprite_create();
    sfSprite_setTexture(game.spritechien, game.texture_oiseau_chien, sfTrue);
    game.spriteviseur = sfSprite_create();
    sfSprite_setTexture(game.spriteviseur, game.textureviseur, sfTrue);
    mainloop(game);
    return 0;
}