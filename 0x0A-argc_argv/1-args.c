#include <stdio.h>

/**
 * main - function that prints number of arguments
 * @argc: number of command-line arguments passed by the user
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
