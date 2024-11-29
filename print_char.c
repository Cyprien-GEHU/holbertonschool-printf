#include <stdarg.h>
#include "main.h"
#include <unistd.h>

/**
 * print_char - print a character from argument in  va_list
 * @list: list where the character is
 * Return: 1 (length of character)
 */

int print_char(va_list list)
{
	char character;

	character = va_arg(list, int);
	_putchar(character);

return (1);
}
