#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int s;
	int c;
	int i;

	c = 1;
	s = 0;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	while (c < argc)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!(isdigit(argv[c][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		s += atoi(argv[c]);
		c++;
	}
	printf("%d\n", s);
	return (0);
}
