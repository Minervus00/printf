#include "main.h"

/**
 * _abs - gives valeur absolue
 * @nb: int
 * Return: value
 */

int _abs(int nb)
{
	if (nb < 0)
		return (-1 * nb);
	else
		return (nb);
}

/**
 * count_digits - count the digits
 * @nb: int
 * Return: the count
 */

int count_digits(int nb)
{
	int count = 0, nb0 = nb;

	if (nb <= 0)
		count += 1;
	while (_abs(nb0) != 0)
	{
		nb0 = nb0 / 10;
		count++;
	}
	return (count);
}

/**
 * integer - print an int
 * @nb: int
 * Return: count
 */
int integer(int nb)
{
	unsigned int unint;
	int count;

	count = count_digits(nb);
	if (nb < 0)
	{
		_putchar('-');
		unint = -nb;
	}
	else
		unint = nb;
	if (unint >= 10)
		integer(unint / 10);
	_putchar(unint % 10 + '0');
	return (count);
}

/**
 * print_int - print a number
 * @ap: va_list with number to print
 * Return: nb of characters printed
 */

int print_int(va_list ap)
{
	int nb = va_arg(ap, int);
	int nb0;

	nb0 = integer(nb);
	return (nb0);
}
