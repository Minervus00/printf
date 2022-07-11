#include "main.h"

/**
 * printstr - print string
 * @ap: va_list
 * Return: nb of character printed
 */

int print_str(va_list ap)
{
    char *string = va_arg(ap, char *);
    int count;

    if (string == NULL)
        string = "(nil)";
    count = _puts(string);
    return (count);
}