#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list
 * Return: number of nodes printed
**/
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\a");
		else
			printf("[%u] %s\a", h->len, h->str);
		h = h->next;
		a++;
	}
	return (a);
}
