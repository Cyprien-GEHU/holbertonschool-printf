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
	unsigned int num;

	if (number < 0)
	{
		_putchar('-');
		num = -number;
		i++;
	}
	else
	{
		num = number;
	}

	while (num / div >= 10)
	{
		div *= 10;
	}

	while (div >= 1)
	{
		_putchar((num / div) % 10 + '0');
		div /= 10;
		i++;
	}
	return (i);
}
