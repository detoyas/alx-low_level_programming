#include "main.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer tonewly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *concatenated;

	i = 0;
	len1 = 0;
	len2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	i = 0;

	while (s2[i] != '\0')
	{
		i++;
		len2++;
	}

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concatenated == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}

	for (i = 0; i < len2; i++)
	{
		concatenated[i + len1] = s2[i];
	}
	concatenated[i + len1] = '\0';
	return (concatenated);
}
