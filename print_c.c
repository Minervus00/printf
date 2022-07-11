#include "main.h"

/**
 * print_c - print a char
 * @ap: va_list
 * Return: number of character printed
 */

int print_c(va_list ap)
{
    _putchar(va_arg(ap, int));
    return(1);
}