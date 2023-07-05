#include "main.h"

/**
 * _sqrt_checker - calcul i*i to check with n.
 * @n: base number.
 * @i: iter number.
 * Return: iter
 */

int _sqrt_checker(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (_sqrt_checker(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns sq root of n
 * @n: base number.
 *
 * Return: square root of n.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_checker(n, 2));
}
