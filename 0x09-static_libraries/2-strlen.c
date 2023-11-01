#include "main.h"

/**
 * _strlen - finds the length of the string
 * @s: pointer for the string to be checked
 * Return: void
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a])
		a++;

	return (a);
}
