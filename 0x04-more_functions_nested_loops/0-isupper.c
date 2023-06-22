#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * 
 * Return: 1 in case uppercase 
 *         0 if not
 * */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
