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

    _printf("Let's try to printf a simple sentence with %c\n", 'd');
    printf("Let's try to printf a simple sentence with %c\n", 'd');
    _printf("%s %s\n", "bonjour", "poto");
    printf("%s %s\n", "bonjour", "poto");
    _printf("%%\n");
    printf("%%\n");
    return (0);
}
