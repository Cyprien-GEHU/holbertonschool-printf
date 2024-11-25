#include "main.h"
#include <stdarg.h>

/**
 * print_string - print more than one character
 * @list: list received to print
 * Return: 0
 */

int print_string(va_list list)
{
	int i = 0;
	char *string;

	string = va_arg(list);

	if (*string == NULL)
		return (NULL);

	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i++;
	}

return (0);
}
