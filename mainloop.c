/*
** EPITECH PROJECT, 2020
** mainloop
** File description:
** mainloop
*/

#include "my_hunter.h"
#include <SFML/Graphics.h>

int mainloop(t_hunter loop)
{
    while (sfRenderWindow_isOpen(loop.window)) {
        while (sfRenderWindow_pollEvent(loop.window, &loop.event)) {
            if (loop.event.type == sfEvtClosed)
                sfRenderWindow_close(loop.window);
    }
        sfRenderWindow_drawSprite(loop.window, loop.spritebackground, NULL);
        chien(loop);
        sfRenderWindow_drawSprite(loop.window, loop.spritechien, NULL);
        canard_rx(loop);
        sfRenderWindow_drawSprite(loop.window, loop.spritecanard_rx, NULL);
        mouse(loop);
        sfRenderWindow_drawSprite(loop.window, loop.spriteviseur, NULL);
        sfRenderWindow_display(loop.window);
    }
    return 0;
}