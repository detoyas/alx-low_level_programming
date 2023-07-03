#include <stdio.h>

/**
 * print_diagsums -  function that prints the sum of diagonals ² int
 * @a: The matrix
 * @size: length of arrays
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;
	int len;

	i = 0;
	sum1 = sum2 = 0;
	len = size * size;
	while (i < len)
	{
		if (i % (size - 1) == 0 && i < len - 1 && i > 0)
			sum2 += *(a + i);
		if (i % (size + 1) == 0 || i == 0)
			sum1 += *(a + i);
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
