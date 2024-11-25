#include <stdarg.h>
#include "main.h"

/**
 * print_char - print a character from va_list
 * @list: list where the character is
 * Return: 1
 */

int print_char(va_list list)
{
	char character;

	character = va_arg(list, int);
	_putchar(character);

return (1);
}
