#include "main.h"
#include <stddef.h>
#include <stdarg.h>

/**
 * get_function - check the %[SPECIFIER] if it's in the list *CHECK
 * and call the function
 *
 * @format: string received with a character "%" or not
 *
 * Return: the length of character print or NULL if we have nothing
 */

int (*get_function(const char *format))(va_list list)
{
	spec check[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_37},
		{"i", print_int_or_dec},
		{"d", print_int_or_dec},
		{NULL, NULL}
	};
	int i;

	for (i = 0; check[i].letter; i++)
	{
		if (*(check[i].letter) == *format)
			return (check[i].function);
	}
return (NULL);
}
