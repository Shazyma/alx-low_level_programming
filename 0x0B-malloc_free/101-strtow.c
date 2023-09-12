#include "main.h"
#include <stdlib.h>



int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - locates the index marking end of first word
 * @str: the string to be searched
 *
 * Return: index marking the end of word
 */

int word_len(char *str)

{
	 int i = 0, l = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		l++;
		i++;
	}
	return (l);
}


/**
 * count_words - number of words
 * @str: string to be searched
 *
 * Return: nummber of words in str
 */

int count_words(char *str)

{
	int i = 0, w = 0, l = 0;

	for (i = 0; *(str + i); i++)
		l++;
	for (i = 0; i < l; i++)
	{
		if (*(str + i) != ' ')
		{
			w++;
			i += word_len(str + i);
		}
	}

	return (w);

}


/**
 * strtow - string to words
 * @str: string to be splitted
 *
 * Return: if str = NULL, str = "", or fails - NULL 
 */

char **strtow(char *str)

{
	char **strings;
	int i = 0, w, x, l, m;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	w = count_words(str);
	if (w == 0)
		return (NULL);

	for (x = 0; x < w; x++)
	{
		while (str[i] == ' ')
			i++;

		l = word_len(str + i);
		strings[x] = malloc(sizeof(char) * (l + 1));
		{
			for (; x >= 0; x--)
				free(strings[x]);

			free(strings);
			return (NULL);
		}

		for (m = 0; m < l; m++)
			strings[x][m] = str[i++];

		strings[x][m] = '\0';
	}
	strings[x] = NULL;

	return (strings);

}
