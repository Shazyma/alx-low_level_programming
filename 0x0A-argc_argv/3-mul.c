#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main Entry
 * @argc: input
 * @argv: input
 * Return: Always 0 Success
 */
int main(int argc, char *argv[])
{
	int a,res = 1;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (a = 1; a < argc;a++)
		{
			res *= atoi(argv[a]);
		}
		printf("%d\n", res);
	}
	return (0);
}
