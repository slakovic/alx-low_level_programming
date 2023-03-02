#include "main.h"
<<<<<<< HEAD
/**
 * _isupper - checks if uppercase
 * @c: character to check
 *
 * Return: gives 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
=======

/**
 * _isupper - checks uppercase
 * @c: parameter
 * Return: 0 if sucessful
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> b4cec81a0334a658c99c63b1a77888a2790c2464
}
