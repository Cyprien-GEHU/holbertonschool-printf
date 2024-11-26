#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * get_function - check the format with format and call the function
 * @format: the format after "%"
 *
 * Return: the length of charater print or "0" if we have nothing
 */

int (*get_function(const char *format))(va_list)
{
	spec check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_37},
		{NULL, NULL}
	};
	int i;

	for (i = 0; check[i].letter; i++)
	{
		if (*check[i].letter == *format)
			return (check[i].function);
	}
	return (0);
}
