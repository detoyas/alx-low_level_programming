#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _isdigit - checks if character is digit
 * @c: the character to check
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - returns the length of a string
 * @s: the string whose length to check
 *
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}

/**
 * big_multiply - multiply two big number strings
 * @s1: first big number string
 * @s2: second big number string
 *
 * Return: product
 */

char *big_multiply(char *s1, char *s2)
{
	char *r;
	int l1, l2, a, b, c, x;

	l1 = _strlen(s1);
	l2 = _strlen(s2);
	r = malloc(a = x = l1 + l2);
	if (!r)
		printf("Error\n"), exit(98);
	while (a--)
		r[a] = 0;

	for (l1--; l1 >= 0; l1--)
	{
		if (!_isdigit(s1[l1]))
		{
			free(r);
			printf("Error\n"), exit(98);
		}
		a = s1[l1] - '0';
		c = 0;

		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			if (!_isdigit(s2[l2]))
			{
				free(r);
				printf("Error\n"), exit(98);
			}
			b = s2[l2] - '0';

			c += r[l1 + l2 + 1] + (a * b);
			r[l1 + l2 + 1] = c % 10;

			c /= 10;
		}
		if (c)
			r[l1 + l2 + 1] += c;
	}
	return (r);
}

/**
 * main - multiply two big number strings
 * @argc: n of arguments
 * @argv: argument
 *
 * Return: Always 0 success.
 */

int main(int argc, char **argv)
{
	char *ret;
	int a, c, h;

	if (argc != 3)
		printf("Error\n"), exit(98);

	h = _strlen(argv[1]) + _strlen(argv[2]);
	ret = big_multiply(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < h)
	{
		if (ret[c])
			a = 1;
		if (a)
			_putchar(ret[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(ret);
	return (0);
}
