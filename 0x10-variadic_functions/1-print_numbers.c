#include "variadic_functions.h"

/**
 * print_numbers - prints numbers given as args
 * @separator: seperator char
 * @n: constant 
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pArgs;

	va_start(pArgs, n);
	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);
		printf("%d", va_arg(pArgs, int));
	}
	va_end(pArgs);
	printf("\n");
}
