#include "main.h"
/**
*main - Entry point
*print_alphabet_x10 - to function to print abc 10 times
*
*/
void
print_alphabet_x10(void)

{
int i;
char c;

for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)

_putchar(c);
_putchar('\n');
}
}
