#include "main.h"

/**
 * _abs - function that computes absolute value of integer
 *
 * @num : input for function
 *
 * Return : always 0 (Success)
 */

int _abs(int num)
{
	if (num < 0)
		num = (-1) * num;

	return (num);
}
