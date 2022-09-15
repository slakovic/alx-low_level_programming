#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
 *     Return: return nothing
*/

void print_diagonal(int n)
{
	int len, space;

	if (n > 0)
	{	
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < n; space++)
			{
				putchar(' ');
			}
			putchar('\\');
			{
				continue;
			}
			putchar('\');
		}
	}
}
