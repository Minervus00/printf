#include "main.h"

/**
 * print_str - print string
 * @ap: va_list
 * Return: nb of character printed
 */

int print_str(va_list ap)
{
	char *string = va_arg(ap, char *);
	int count;

	if (string == NULL)
		string = "(null)";
	while (string[0])
	{
		_putchar(string[0]);
		count++;
		string++;
	}
	return (count);
}
