#include "main.h"

/**
 * print_number - prints int
 * @n:integer to convert to character
 */

void print_number(int n)
{
	unsigned int absolut;
	int multip = 1;
	unsigned int absolutCount;
	int i;
	int c = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n += 1;
		n *= -1;
		n++;
	}
	absolut = n;
	absolutCount = n;

	while (absolutCount > 0)
	{
		absolutCount /= 10;
		c++;
	}
	for (i = 0; i < c - 1; i++)
		multip *= 10;

	for (i = 0; i < c; i++)
	{
		_putchar((absolut / multip) + '0');
		absolut = absolut % multip;
		multip /= 10;
	}
}
