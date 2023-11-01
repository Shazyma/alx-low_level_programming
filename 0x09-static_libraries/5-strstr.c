#include "main.h"

/**
 * _strstr - function locate
 * @haystack: pointer to char
 * @needle: pointer to char
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	char *r = haystack, *fn = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (r);
		}
		needle = fn;
		r++;
		haystack = r;
	}

	return (0);
}
