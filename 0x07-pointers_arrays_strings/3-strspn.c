#include "main.h"


/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int i, n, v, c;

	v = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		c  = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				v++;
				c = 1;
			}
		}
		c++;
	}
	return (n);

}
		


		


