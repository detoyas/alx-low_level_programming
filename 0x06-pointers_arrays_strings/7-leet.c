#include "main.h"

/**
 * leet - encodes a string into 1337
 *
 * @s: string
 *
 * Return: char
 */

char *leet(char *s)
{
	char combin[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; combin[j] != '\0'; j++)
		{
			if (s[i] == combin[j])
			{
				s[i] = combin[j + 1];
				break;
			}
		}
	}
	return (s);
}
