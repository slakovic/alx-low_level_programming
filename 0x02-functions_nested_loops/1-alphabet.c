#include "main.h"

/**
 * prints_alphabet - utilizes on the _putchar function to print alphabet
 *  
 * Return 0 (success)
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}
