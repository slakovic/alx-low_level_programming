/**
 * _strstr - function that locates a substring
 *
 * @haystack: input string to search for matching substrings
 * @needle: subtring to search for
 * Return: pointer to the beginning located substring or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	/**
	 * we initialize a helping variable to assist
	 * in returning one of our parameter pointers haystacks
	*/
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
