#include "main.h"

/**
 * _abs - main function
 *
 * @num: integer to make absolute
 * Return: int or int times negative
 *
 */


int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;

	return (num);
}
