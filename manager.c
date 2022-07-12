#include "main.h"

/**
 * manager - selector for type of fun.
 * @format: string.
 * Description: the function loops through the structs
 * selector[] ment of the struct.
 * Return: a pointer
 */

int (*manager(const char *format))(va_list)
{
	int i;

	strum selector[] = {
		{"%c", print_c},
		{"%s", print_str},
		{"%d", print_int},
		{"%i", print_int},
		{"%%", print_percent},
		{"%b", print_bin},
		{"%x", print_x},
		{"%X", print_X},
		{"%S", print_spestr},
		{"%o", print_oct},
		{"%u", print_dec},
		{"%p", print_p},
		{"%r", print_revstr},
		{"%R", print_rot13},
		{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
		return (NULL);
	for (i = 0; selector[i].q; i++)
	{
		if (format[1] == selector[i].q[1])
			return (selector[i].u);
	}
	return (NULL);
}
