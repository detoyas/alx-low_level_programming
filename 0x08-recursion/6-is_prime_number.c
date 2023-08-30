#include "main.h"

/**
 * is_prime_helper - check multipliers of n
 * @n: base number
 * @i: iter
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - function returns 1 if input int is prime
 * @n: base number.
 *
 * Return: 1 if n is prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime_helper(n, 2));
}
