#include "main.h"

/**
 * print_oct - print a otc
 * @ap: va_list with number to print
 * Return: nb of characters printed
 */

int print_oct(va_list ap)
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
			num /= 8;
			len++;
		}
		pow = 1;
		for (j = 1; j <= len - 1; j++)
			pow *= 8;
		for (j = 1; j <= len; j++)
		{
			digit = n / pow;
			_putchar(digit + '0');
			count++;
			n -= digit * pow;
			pow /= 8;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
