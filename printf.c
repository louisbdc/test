/*
** EPITECH PROJECT, 2020
** printf
** File description:
** printf
*/

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include "my.h"
void my_printf_str(va_list *my_list)
{
    char *src = va_arg(*my_list, char *);
    
    write(1, src, my_strlen(src));
}

void my_printf_char(va_list *my_list)
{
    char c = va_arg(*my_list, int);
    
    write(1, &c, 1);
}

void my_printf_nbr(va_list *my_list)
{
    int num = va_arg(*my_list, int);
    
    my_put_nbr(num);
}

int findIndex(char *tab, char element)
{
    int index = 0;
    
    for (index = 0; tab[index] != 0; index++) {
        if (tab[index] == element)
            return(index);
    }
    return(-1);
}

void my_printf(char *src, ...)
{
    void (*tabFunction[3]) (va_list *) = {my_printf_str, my_printf_char, my_printf_nbr};
    char tabIndex[4] = {'s', 'c', 'd', 0};
    va_list my_list;
    int i = 0;
    int tmpIndex = 0;
    
    va_start(my_list, src);
    for (i = 0; src[i] != 0; i++) {
        if (src[i] != '%') {
            write(1, &src[i], 1);
        } else {
            i = i + 1;
            tmpIndex = findIndex(tabIndex, src[i]);
            if (tmpIndex != -1) {
                (*tabFunction[tmpIndex]) (&my_list);
            }
        }
    }
    my_putchar('\n');
}
