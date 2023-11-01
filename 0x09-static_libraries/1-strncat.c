#include "main.h"

/**
 * *_strncat - oncatenates n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_leng, a;

	for (dest_leng = 0; dest[dest_leng] != '\0'; dest_leng++)
	;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_leng + a] = src[a];

	/*should end with a end of string char*/
	dest[dest_leng + a] = '\0';

	return (dest);
}
