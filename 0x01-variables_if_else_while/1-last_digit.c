#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *              greater than, is zero and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* my code */
	1 = n % 10; /* gets last digit */

	if (1 > 5)
	{
		printf("Last digit of %i is %i and is greater thatn 5\n", n, 1);	}
	else if (1 == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, 1);
	}
	else if (1 < 6 && 1 != 0)
	{
		printf("Last digit of %i is %i and is less than c and not 0\n", n, 1);
	}
	return (0)
}

