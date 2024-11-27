#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * _putchar - putchar lik
 * @c: character received to print
 */
void _putchar(char c)
{
	write(1, &c, 1);
}



/**
 * print_int - Voila ce qui t'interesse pour %D et %i
 * Avec la recusivité de la fonction pour afficher a l'envers
 * @n: number received
 */
void print_int(int n)
{
	int num = n;

	if (num < 0)
	{
		_putchar(45);
		num = -num;
	}

	if (num / 10 != 0)
		print_int(num / 10);

	_putchar(num % 10 + '0');
}

/**
 * main - function to print int with scanf
 * Return: 0
 */
int main(void)
{
	int number;

	printf("Marque le nombre choisi:\n");
	scanf("%d", &number);
	printf("Nombre choisi: %d\n", number);
	print_int(number);
	_putchar('\n');

return (0);
}
