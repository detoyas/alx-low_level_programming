#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int count = 98;
	int first = 1;
	int second = 2;

	printf("%d, %d", first, second);
	count -= 2;

	while (count > 0)
	{
		int next = first + second;

		if (next < 0)
		{
			break;
		}
		printf(", %d", next);

		first = second;
		second = next;
		count--;
	}
	printf("\n");
	return (0);
}
