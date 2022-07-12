#include "main.h"

/**
 * print_bin - print a binary
 * @ap: va_list with number to print
 * Return: nb of characters printed
 */

int print_bin(va_list ap)
{
	int count = 0;
	unsigned int len, pow, j, digit, n, num;

	n = va_arg(ap, unsigned int);
	if (n != 0)
	{
		num = n;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		pow = 1;
		for (j = 1; j <= len - 1; j++)
			pow *= 2;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow;
			_putchar(digit + '0');
			count++;
			n -= digit * pow;
			pow /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
