#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 2;

	float fib1 = 1;
	float fib2 = fib1 + 1;
	float sum = fib1 + fib2;

	printf("%.0f, ", fib1);
	printf("%.0f, ", fib2);
	while (count < 98)
	{
		count++;
		printf("%.0f", sum);
		fib1 = fib2;
		fib2 = sum;
		sum = fib1 + fib2;
		if (count < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
