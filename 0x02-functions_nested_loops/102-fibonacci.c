#include "main.h"
#include <stdio.h>

/**
 * main -  prints the first 50 Fibonacci numbers
 * Return: Nothing!
 */

int main(void)

{
	int i = 0;
	long j = 1, k = 2;

	while (i < 50)
	{
	if (i == 0)
	printf("%jd", j);
	else if (i == 1)
	printf(", %jd", k);
	else
	{
	k += j;
	j = k - j;
	printf(", %jd", k);
	}
	++i;
	}
	printf("\n");
	return (0);

}
