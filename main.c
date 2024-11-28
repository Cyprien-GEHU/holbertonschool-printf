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
	char *len = "bonjour";

    	_printf("Let's try to printf a simple sentence with %%\n");
    	printf("Let's try to printf a simple sentence with %%\n");
    	_printf("%s \n", len);
    	printf("%s \n", len);
    	_printf("%%\n");
    	printf("%%\n");
    	_printf("%i %d\n", 102785, -355373); 
    	printf("%i %d\n", 102785, -355373);
	_printf("Negative:[%d]\n", -762534);
    	printf("Negative:[%d]\n", -762534);
    return (0);
}
