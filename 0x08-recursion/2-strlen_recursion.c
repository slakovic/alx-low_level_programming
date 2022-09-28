/**
 * _strlen_recursion - Function that returns the length of a string
 *
 * @s: string
 *
 * Return: length
*/
int - strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	else
		return (0);
}
