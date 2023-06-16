#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints alphabet backward
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char l = 'z';

	while (l >= 'a')
	{
		putchar(l);
		l--;
	}
	putchar('\n');
	return (0);
}
