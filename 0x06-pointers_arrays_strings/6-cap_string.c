#include "main.h"

/**
 * _isdelimOf - returns boolean if special  character
 * @c: character to return
 * Return: true or false
 */

int _isdelimOf(char c)
{
	int i;
	char caparr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (caparr[i] == c)
			return (1);
	}
	return (0);
}

/**
 * cap_string - capitalizes the string
 * @s: string
 * Return: the string capitalized
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_isdelimOf(s[i]))
			continue;
		if (s[i] >= 'a' && s[i] <= 'z' && (_isdelimOf(s[i - 1]) || i == 0))
			s[i] = s[i] - 32;

	}
	return (s);
}
