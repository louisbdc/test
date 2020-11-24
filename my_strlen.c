/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** task03 day04
*/

int my_strlen(char const *str)
{
    int inc = 0;
    while (str[inc] != '\0') {
        inc++;
    }
    return (inc);
}
