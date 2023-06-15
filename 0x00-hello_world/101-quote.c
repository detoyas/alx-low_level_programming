#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: program that prints to the standard error
 *
 * Return: Always 1 (Error)
 */

int main(void)
{
	char quot[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, quot, 59);
	return (1);
}
