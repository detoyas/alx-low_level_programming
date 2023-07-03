#include "main.h"

/**
 * _strspn - function that searches a string of bytes
 * @s: String to search
 * @accept: acceptable bytes string can contain
 *
 * Return: Length
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, a;

	i = j = 0;
	while (s[i] != 0)
	{
		k = 0;
		a = 0;
		while (accept[k] != 0)
		{
			if (s[i] != accept[k])
			{
				k++;
			}
			else if (s[i] == accept[k])
			{
				a++;
				j++;
				k++;
			}
		}
		if (a == 0)
			return (j);
		i++;
	}
	return (j);
}
