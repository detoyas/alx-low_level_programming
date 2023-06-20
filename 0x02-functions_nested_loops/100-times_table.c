#include "main.h"

/**
 * print_times_table - times table function
 * @n: integer to return
 *
 */
void print_times_table(int n)
{
	int i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int multipl = i * j;

				if (j == 0)
				{
					_putchar('0');
				} else if (multipl <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(multipl + '0');
				} else if (multipl > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (multipl / 100));
					_putchar('0' + ((multipl / 10) % 10));
					_putchar('0' + (multipl % 10));
				} else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (multipl / 10));
					_putchar('0' + (multipl % 10));
				}
			}
			_putchar('\n');
		}
	}
}
