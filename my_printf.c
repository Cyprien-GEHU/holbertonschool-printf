#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print a message on printf
 * @format : the message and the type of data
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
	if (format == NULL)
		return (0);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			length++;
		}

		else
		{
			i++;
			function = get_function(&format[i]);
			length += function(argument);
		}
		i++;
	}
	va_end(argument);
	length -= 1;
	return (length);
}
