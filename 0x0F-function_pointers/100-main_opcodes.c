#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0 on success
 */

int main(int argc, char **argv)
{
	char *p = (char *)main;
	int nbyte;

	if (argc != 2)
		printf("Error\n"), exit(1);
	nbyte = atoi(argv[1]);
	if (nbyte < 0)
		printf("Error\n"), exit(2);

	while (nbyte--)
		printf("%02hhx%s", *p++, nbyte ? " " : "\n");
	return (0);
}
