#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: the argument count
 * @av: argument vector
 *
 * Return: ...
 */

char *argstostr(int ac, char **av)

{
	int a = 0, b = 0, c = 0, k = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (b < ac)
	{ 
		while (av[a][c])
		{
			a++;
			c++;
		}
	s = malloc((sizeof(char) * a) + ac + 1);

	a = 0;
	while (av[a])
	{
		while (av[a][c])
		{
			s[k] = av[a][b];
			k++;
			c++;
		}
		s[k] = '\n';

		c = 0;
		k++;
		a++;
	}
	}

	k++;
	s[k] = '\0';
	return (s);

}		
