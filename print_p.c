#include "main.h"

/**
 * printf_hexl - prints a long hexadecimal number.
 * @num: argument
 * Return: counter.
 */
int print_hexl(unsigned long int num)
{
	long int i;
	long int *array;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(long int));

	for (i = 0; i < count; i++)
	{
		array[i] = temp % 16;
		temp /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
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