#include "main.h"

/**
 * _abs - function that puts absolute value of number
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
