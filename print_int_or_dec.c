#include <stdarg.h>
#include "main.h"

/**
 *print_int_or_dec - prints a integer or decimal
 *@args: argument to print
 *Return: number of charcters to printed
 */
int print_int_or_dec(va_list args)
{
	int number = va_arg(args, int);
	unsigned int i = 0;
	int div = 1;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		i++;
	}
	while (number / div >= 10)
	{
		div *= 10;
	}

	while (div >= 1)
	{
		_putchar((number / div) % 10 + '0');
		div /= 10;
		i++;
	}
	return (i);
}
