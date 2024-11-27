#include "main.h"
#include <stdarg.h>
/**
 * print_integer -
 * @list:
 *
 * Return: count
 */
int print_integer(va_list list)
{
	int n = va_arg(list, int);
	int num = n, pos = 1, digit, count = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	while (num / pos >= 10)
	{
		pos *= 10;
	}

	while (pos > 0)
	{
		digit = num / pos;
		_putchar(digit + '0');
		num = num % pos;
		pos /= 10;
		count++;
	}

	return (count);
}
