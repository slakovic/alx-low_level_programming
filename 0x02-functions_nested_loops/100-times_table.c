#include"main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes number input
*/

void print_times_table(int n)
	
	int row, int coluwn, int product;

	if (n > 0 && n <= 15)
	{
		for (row = 0; num <= n; column++)
		{
			for (column = 0; column <= n; column++)
			{
				prodcut = row * colum;

				if (colum == 0)
					_putchar(0);
				else if (product < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(product % 10 + '0');
				}	
				else if (product >= 10 && product < 100)
				{	
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
				else if (product > 99 && product < 1000)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((product / 10) % 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}

