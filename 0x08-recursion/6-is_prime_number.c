#include "main.h"

int prime_number(int n, int i);

/**
 * is_prime_number - Function of if an integer is a prime number or not
 *
 * @n: evaluate number
 *
 * Return: if n is prime number 1, 0 if otherwise
*/
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1);
}

/**
 * prime_number - calculates if a number is prime recursively
 *
 * @n: number to evaluate
 *
 * @i: iterator
 *
 * Return: if n is prime 1, 0 if otherwise
*/

int prime_number(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (n % i == 0)
	}
		return (0);

else
	{
		return (prime_number(n, i - 1));
	}
}
