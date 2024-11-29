#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
 *print_int_or_dec - prints a integer or decimal
 *@args: argument to print
 *Return: number of characters to print
 */

int print_int_or_dec(va_list args)
{
	int number = va_arg(args, int);
	int length;

	length = print_i(number);
	printf(" %d", length);

return (length);
}

/**
 * print_int - print the integer with recursivity
 * Recursivity of the fucntion
 * @n: lenght returned
 * Return: lenght of characters
 */

int print_i(int n)
{
	int num = n;
	int l = 0;

	if (num < 0)
	{
		_putchar(45);
		num = -num;
		l++;
	}

	if (num / 10 != 0)
	{
		l++;
		print_i(num / 10);
	}

	_putchar(num % 10 + '0');
	l++;

return (l);
}
