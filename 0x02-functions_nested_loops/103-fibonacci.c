#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0;
	long int fib1 = 1;
	long int fib2 = fib1;
	long int sum = fib1 + fib2;

	while (sum < 4000000)
	{
		if (sum % 2 == 0)
		{
			count += sum;
		}
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
	}
	printf("%d\n", count);

	return (0);
}
