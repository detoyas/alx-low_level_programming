#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int fn1 = 0, sn1 = 1, fn2 = 0, sn2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", sn1, sn2);
	for (count = 2; count < 98; count++)
	{
		if (sn1 + sn2 > LARGEST || fn2 > 0 || fn1 > 0)
		{
			hold1 = (sn1 + sn2) / LARGEST;
			hold2 = (sn1 + sn2) % LARGEST;
			hold3 = fn1 + fn2 + hold1;
			fn1 = fn2;
			fn2 = hold3;
			sn1 = sn2;
			sn2 = hold2;
			printf("%lu%010lu", fn2, sn2);
		}
		else
		{
			hold2 = sn1 + sn2;
			sn1 = sn2;
			sn2 = hold2;
			printf("%lu", sn2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
