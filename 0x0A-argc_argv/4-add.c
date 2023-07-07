#include <stdio.h>

/**
 * main - function that that multiplies two numbers
 * @argc: number of command-line arguments passed by the user
 * @argv: an array of pointers to the strings
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	int sum = 0;

	for (int i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
