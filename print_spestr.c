#include "main.h"

/**
 * print_spestr - print strings
 * @ap: string
 * Return: int
 */

int print_spestr(va_list ap)
{
	int i, count, j;
	char *s;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		if  ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (s[i] < 16)
			{
				_putchar('0');
				count++;
			}
			j = print_hex(s[i], 1);
			count += 2 + j;
		}
		else
		{
			_putchar(s[i]);
			count++;
		}
	}
	return (count);
}
