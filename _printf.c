#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - outputs formatted text to the standard output
 * format used : int, char, char*, '%'
 * @format : input with the format specifier %[SPECIFIER] or just a  string
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	unsigned int length = 0;
	va_list argument;
	int (*function)(va_list);

	va_start(argument, format);
	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c' || format[i + 1] == 'd' ||
			format[i + 1] == '%' || format[i + 1] == 'i' ||
			format[i + 1] == 's')
			{
				i++;
				function = get_function(&format[i]);
				length += function(argument);
			}

			else
			{
				_putchar(format[i]);
				length++;
			}
		}

		else
		{
			_putchar(format[i]);
			length++;
		}
		i++;
	}
	va_end(argument);
	return (length);
}
