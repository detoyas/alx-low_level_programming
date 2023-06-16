#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints possible single digits numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);

		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	i++;
	}
	putchar('\n');
	return (0);
}
