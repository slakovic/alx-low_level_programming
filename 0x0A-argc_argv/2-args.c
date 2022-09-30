#include <stdlib.h>
#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 *
 * @argc: holds the number of arguments passed
 *
 * @argc: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/

int main(int argc, char **argv) /**all arguments be printed*/
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
