#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 * @argc: number of command-line arguments passed by the user
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}