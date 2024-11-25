#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_string - print more than one character
 * @list: list received to print
 * Return: 0
 */

int print_string(va_list list)
{
	int i = 0;
	char *string;

	string = va_arg(list, char*);

	if (string == NULL)
		return (-1);

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}

return (0);
}
