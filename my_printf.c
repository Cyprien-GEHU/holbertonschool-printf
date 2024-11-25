#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print a message with format
 * @format : the message and the type of data
 *
 * Return: the number of character printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list argument;

	va_start(argument, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++;
			if (format[i] == 'c')
				print_char(argument);
		}
		i++;
	}
	va_end(argument);
	i -= 1;
	return (i);
}
