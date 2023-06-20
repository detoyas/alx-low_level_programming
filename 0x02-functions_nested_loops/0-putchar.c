include "main.h"

/**
 * main - Entry point
 *
 * Description: print a string with _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(str[i]);
	-putchar('\n');

	return (0);
}
