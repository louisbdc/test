/*
** EPITECH PROJECT, 2020
** manage
** File description:
** mouse
*/

#include "my_hunter.h"

int mouse(t_hunter mouse)
{
    sfVector2i souris;
    souris = sfMouse_getPositionRenderWindow(mouse.window);
    mouse.positionviseur.x = souris.x - 25;
    mouse.positionviseur.y = souris.y - 25;

    if (mouse.event.type == sfEvtMouseButtonPressed) {
        if (mouse.event.mouseButton.button == sfMouseLeft) {
            canard_mort(mouse);
        }
    }
    sfSprite_setPosition(mouse.spriteviseur, mouse.positionviseur);
    return 0;
}
