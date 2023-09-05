#include "main.h"
#include <stdlib.h>


/**
 * calculate - function to calculate number of words
 * @str: string being passed to check for words
 *
 * Return: number of words
 */

int calculate(char *str)
{
	int a, num = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (*str == ' ')
			str++;
		else
		{
			for (; str[a] != ' ' && str[a] != '\0'; a++)
				str++;
			num++;
		}
	}
	return (num);
}

/**
 * _free - frees the memory
 * @string: pointer values being passed for freeing
 * @i: iter
 */

void _free(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}

/**
 * strtow - function that splits string into words
 * @str: string
 * Return: null if string is empty or function fails
 */

char **strtow(char *str)
{
	int totalwords = 0, b = 0, c = 0, length = 0;
	char **words, *fword;

	if (str == 0 || *str == 0)
		return (NULL);
	totalwords = calculate(str);
	if (totalwords == 0)
		return (NULL);
	words = malloc((totalwords + 1) * sizeof(char *));
	if (words == 0)
		return (NULL);
	for (; *str != '\0' &&  b < totalwords;)
	{
		if (*str == ' ')
			str++;
		else
		{
			fword = str;
			for (; *str != ' ' && *str != '\0';)
			{
				length++, str++;
			}
			words[b] = malloc((length + 1) * sizeof(char));
			if (words[b] == 0)
			{
				_free(words, b);
				return (NULL);
			}
			while (*fword != ' ' && *fword != '\0')
			{
				words[b][c] = *fword;
				fword++, c++;
			}
			words[b][c] = '\0';
			b++;
			c = 0, length = 0;
			str++;
		}
	}
	return (words);
}
