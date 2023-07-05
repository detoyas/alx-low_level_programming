#include "main.h"

/**
 * factorial - function that returns factorial of n
 * @n: number input
 * 
 * Return: factorial of n 
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
