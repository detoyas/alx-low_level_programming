#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character input 
 *
 * Return: 1 in case uppercase 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
