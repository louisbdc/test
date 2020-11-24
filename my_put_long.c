/*
** EPITECH PROJECT, 2020
** my_put_long
** File description:
** my_put_long
*/

int my_putchar(char c);

int my_put_long(long int nb)
{
    long int d;

    if (nb < 0) {
        nb = -nb;
        my_putchar('-');
    }
    if (nb > 9)
        my_put_nbr(nb / 10);
    d = nb % 10 + 48;
    my_putchar(d);
    return (0);
}
