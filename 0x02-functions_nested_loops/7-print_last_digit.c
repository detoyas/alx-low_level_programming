#include "main.h"

/**
 * print_last_digit - print last digit of num
 *
 * @num: input number
 *
 * Return: lastdigit
 */

int print_last_digit(int num)
{
	int lastdigit = num % 10;

	if (lastdigit < 0)
	{
		lastdigit = -1 * lastdigit;
	}

	_putchar(lastdigit + '0');

	return (lastdigit);
}
