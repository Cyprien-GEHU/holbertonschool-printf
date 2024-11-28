#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *len3 = "bonjour";
	int len;
    	int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
    	len2 = printf("Let's try to printf a simple sentence.\n");

    	_printf("Let's try to printf a simple sentence with %%\n");
    	printf("Let's try to printf a simple sentence with %%\n");
    	_printf("%s \n", len3);
    	printf("%s \n", len3);
    	_printf("%%\n");
    	printf("%%\n");
    	_printf("%i %d\n", 102785, -355373); 
    	printf("%i %d\n", 102785, -355373);
	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
	_printf("Length:[%d, %i]\n", len, len);
    	printf("Length:[%d, %i]\n", len2, len2);
    return (0);
}
