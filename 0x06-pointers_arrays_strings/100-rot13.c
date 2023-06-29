#include "main.h"

/**
 * rot13 - encrypts string using rot13
 * @s: string to encrypt
 * Return: 
 */

char *rot13(char *s)
{
	char p1[52] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char p2[52] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	int i;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (j = 0; p1[j] != '\0'; j++)
		{
			if (s[i] == p1[j])
			{
				s[i] = p2[j];
				break;
			}
		}
	}
	return (s);
}
