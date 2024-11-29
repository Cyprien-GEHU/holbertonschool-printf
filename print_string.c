#include <stdarg.h>
#include <stddef.h>
#include "main.h"
#include <stdio.h>

/**
 * print_string - print more than one character
 * @list: list received to print
 * Return: 0
 */

int print_string(va_list list)
{
	int i = 0;
	int length = 0;
	char *string;

	string = va_arg(list, char*);

	if (string == NULL)
		string = "(null)";

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
		length++;
	}

return (length);
}
