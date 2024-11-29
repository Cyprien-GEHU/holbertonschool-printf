#include <stdarg.h>
#include "main.h"

/**
 * print_37 - prints the character %.
 * @list : void here 'cause we don't need it
 * Return: 1 (length)
 */

int print_37(va_list list)
{
	(void)list;
	_putchar(37);
	return (1);
}
