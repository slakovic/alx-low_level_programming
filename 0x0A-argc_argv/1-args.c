#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints the number of arguments passed
 *
 * @argc: holds the number of arguments passed
 *
 * @argv: array poointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);

	return (0);
}
