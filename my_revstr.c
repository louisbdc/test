/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** task03
*/

int my_strlength(char *str)
{
    int inc = 0;
    while (str[inc] != '\0') {
        inc++;
    }
    return (inc);
}

char * my_revstr(char *str)
{
    int inc = 0;
    int end = my_strlength(str) - 1;
    char tmp;

    while (inc <= end) {
        tmp = str[end];
        str[end] = str[inc];
        str[inc] = tmp;
        inc++;
        end--;
    }
    return (str);
}
