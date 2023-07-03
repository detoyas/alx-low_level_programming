#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: String to search through
 * @needle: String to search for
 *
 * Return: Pointer to beginning of located string
 */

char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n == *haystack && *haystack != 0
		       && *n != 0)
		{
			haystack++;
			n++;
		}
		if (*n == 0)
			return (h);
		haystack = h + 1;
	}
	return (0);
}
