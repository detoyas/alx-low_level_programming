#include "main.h"

/**
 * print_most_numbers - print single digit numbers except 2 and 4
 *
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		while (i = '2' || i = '4')
		{
			i++;
		}
		else
			_putchar(i);
	}
	_putchar('\n');
}
