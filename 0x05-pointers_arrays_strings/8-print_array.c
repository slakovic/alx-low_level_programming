#include "main.h"

/**
 * print_array - prints n elements of array of integers
 *
 * @n: elements parameter input
 * @a: array parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar(10);
}
