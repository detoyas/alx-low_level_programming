#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that prints the alphabet in lower then UPPER
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	letter++;
	}
	putchar('\n');
	return (0);
}
