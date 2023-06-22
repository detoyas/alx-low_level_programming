#include "main.h"

/**
 * print_line - printing line using _putchar
 * @n: input to print
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{	
		_putchar('_');
	}
	_putchar('\n');
}
