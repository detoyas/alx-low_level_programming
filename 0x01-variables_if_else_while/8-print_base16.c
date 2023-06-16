#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints numbers base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char num = '0';

	/* Print digits 0-9 */
	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';

	/* Print letters a-f */
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
