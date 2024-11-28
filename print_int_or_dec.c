#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_int_or_dec - prints a integer or decimal
 *@args: argument to print
 *Return: number of charcters to printed
 */
int print_int_or_dec(va_list args)
{
	int number = va_arg(args, int);
	int i = 0;
	int n = 0;
	int digit;
	int x = number;
	int div = 1;

	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		i++;
	}

	if (number >= 0 && number < 9)
	{
		_putchar(number + '0');
		i++;
	}

	if (number > 9)
	{
		while (x / 10 != 0)
		{
			n++;
			x = x / 10;
			div *= 10;
		}

		while (n >= 0)
		{
			digit = (number / div) % 10;
			_putchar(digit + '0');
			div /= 10;
			n--;
			i++;
		}
	}
	return (i);
}
