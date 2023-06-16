#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints single digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
