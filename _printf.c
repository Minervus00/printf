#include "main.h"

int _printf(const char *format, ...)
{
        int  (*structyp)(va_list);
        unsigned int pri_c = 0;
        va_list ap;
        
        if (format == NULL)
                return (-1);
        va_start(ap, format);

        while (format[0])
        {
                if (format[0] == '%')
                {
                        structyp = manager(format);
                        if (structyp)
                        {
                                pri_c += structyp(ap);
                        }
                        else if (format[1] != '\0')
                        {
                                pri_c += _putchar('%');
                                pri_c += _putchar(format[1]);
                        }
                        else
                        {
                                pri_c += _putchar('%');
                                break;
                        }
                        format += 2;
                }
                else
                {
                        pri_c += _putchar(format[0]);
                        format++;
                }
        }
       
        va_end(ap);
        return(pri_c);
}

