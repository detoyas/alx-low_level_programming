#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints char c to stdout
 * @c : character to print
 * Return: On success 1.
 *         On error -1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
