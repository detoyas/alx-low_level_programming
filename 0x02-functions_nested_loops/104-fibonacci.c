#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 98;
	unsigned long long first = 1;
	unsigned long long second = 2;

	printf("%llu, %llu", first, second);
	count -= 2;

	while (count > 0)
	{
		unsigned long long next = first + second;
		
		printf(", %llu", next);

		first = second;
		second = next;
		count--;
	}
	printf("\n");
	
	return (0);
}

