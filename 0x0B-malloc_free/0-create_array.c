#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the array
 * @c: the char to fill the array
 *
 * Return:  the array filled
 */

char *create_array(unsigned int size, char c)

{
	unsigned int y;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return(NULL);

	for (y = 0; y < size; y++)
	{
		s[y] = c;
	}

	return (s);

}
