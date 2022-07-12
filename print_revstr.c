#include "main.h"

/**
 * print_revstr - print reverse string
 * @ap: string
 * Return: nb of printed characters
 */

int print_revstr(va_list ap)
{
	char *s;
	int i, j;

	s = va_arg(ap, char *);
	if (s == NULL)
		s = "(nil)";
	for (i = 0; s[i];)
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	return (i);
}
