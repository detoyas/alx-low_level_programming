#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int first_num1 = 0, second_num1 = 1, first_num2 = 0, second_num2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", second_num1, second_num2);
	for (count = 2; count < 98; count++)
	{
		if (second_num1 + second_num2 > LARGEST || first_num2 > 0 || first_num1 > 0)
		{
			hold1 = (second_num1 + second_num2) / LARGEST;
			hold2 = (second_num1 + second_num2) % LARGEST;
			hold3 = first_num1 + first_num2 + hold1;
			first_num1 = first_num2;
			first_num2 = hold3;
			second_num1 = second_num2;
			second_num2 = hold2;
			printf("%lu%010lu", first_num2, second_num2);
		}
		else
		{
			hold2 = second_num1 + second_num2;
			second_num1 = second_num2;
			second_num2 = hold2;
			printf("%lu", second_num2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}

