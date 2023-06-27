#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

unsigned long calculateChecksum(char *str)
{
	unsigned long total = 0;
	while (*str != 0)
	{
		total += *str;
		str++;
	}
	return total;
}

int main(void)
{
	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQSTUVWXYZ";
	char password[33];
	unsigned long totalChecksum;
	int index, flag = 0;

	srand(time(NULL));

	while (flag == 0)
	{
		for (index = 0; index < 33; index++)
	{
		password[index] = charset[rand() % (sizeof(charset) - 1)];
	}	
	password[index] = '\0';

	totalChecksum = calculateChecksum(password);
	if (totalChecksum == 2772)
		{
		flag = 1;
	printf("%s", password);
		}	
	}
    return 0;
}

