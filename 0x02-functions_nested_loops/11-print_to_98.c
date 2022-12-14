#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print natural numbers from n to 98
 * @n: the number to start counting from n to 98
 * Return: always 0
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
