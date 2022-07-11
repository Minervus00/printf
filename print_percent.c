#include "main.h"

/**
 * print_percent - print %
 * @format: format
 * @ap: va_list
 * Return: number of printed characters
 */

int print_percent(va_list ap)
{
    (void)ap;
    _putchar('%');
    return(1);
}