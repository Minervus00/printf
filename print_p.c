#include "main.h"

/**
 * print_hexl - prints a long hexadecimal number.
 * @num: argument
 * Return: counter.
 */
int print_hexl(unsigned long int num)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = "0123456789abcdef";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);
	for (i = 0; ptr[i]; i++)
		_putchar(ptr[i]);
	return (i);
}

/**
 * print_p - print void pointer
 * @ap: pointer
 * Return: count
 */

int print_p(va_list ap)
{
	char *s = "(nil)";
	int count, i;
	void *m;
	long int j;

	m = va_arg(ap, void *);
	if (m == NULL)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
		}
		return (i);
	}
	j = (unsigned long int)m;
	_putchar('0');
	_putchar('x');
	count = print_hexl(j);
	return (count + 2);
}
