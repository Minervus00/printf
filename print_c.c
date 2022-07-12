#include "main.h"

/**
 * print_c - print a char
 * @ap: va_list
 * Return: number of character printed
 */

int print_c(va_list ap)
{
	unsigned char c;

	c = va_arg(ap, int);
	_putchar(c);
	return (1);
}

