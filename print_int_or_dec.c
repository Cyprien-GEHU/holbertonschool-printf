#include "main.h"
#include <stdarg.h>
/**
 *print_int_or_dec - prints a integer or decimal
 *@args: argument to print
 *Return: number of charcters to printed
 */
int print_int_or_dec(va_list args)
{
	int n = va_arg(args, int);
	int num = n, last = n % 10, digit, pos = 1;
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
		last = -last;
		i++;
	}

	while (num / 10 != 0)
	{
		pos *= / 10;
	}

	num = n < 0 ? -n : n;
	while (pos > 0)
	{
		digit = num / pos;
		_putchar(digit + '0');
		num = num - (digit * pos);
		pos = pos / 10;
		i++;
	}

	_putchar(last + '0');
	i++;

	return (i);
}
