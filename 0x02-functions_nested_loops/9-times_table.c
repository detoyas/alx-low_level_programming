#include "main.h"

/**
 * times_table - times table function
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int multipl = j * i;

			if (j == 0)
			{
				_putchar('0');
			} else if (multipl <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multipl + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multipl / 10 + '0');
				_putchar(multipl % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
