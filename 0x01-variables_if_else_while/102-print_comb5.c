#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program that prints all possible combinations of two two-digit
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit1 = 0, digit2 = 0;

	while (digit1 <= 99)
	{
		digit2 = digit1;

		while (digit2 <= 99)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');

			if (digit1 < 99 || digit2 < 99)
			{
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
