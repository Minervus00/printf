#include "main.h"

/**
 * _puts - print a string with a new line
 * @string: intup str
 * Return: nb of character printed
 */

int _puts(char *string)
{
	int i = 0, count = 0;

	while (string[i])
	{
		_putchar(string[i]);
		i++;
		count++;
	}
	return (count);
}
