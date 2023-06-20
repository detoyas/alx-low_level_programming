#include "main.h"

/**
 * _isalpha - checks if character is alphabet
 * @c: input from other function
 *
 * Return: 1 character is an alphabetic
 *         0 character is not an alphabetic
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
