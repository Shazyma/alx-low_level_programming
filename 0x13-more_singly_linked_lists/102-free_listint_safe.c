#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *c;

	if (head != NULL)
	{
		c = *head;
		while ((temp = c) != NULL)
		{
			c = c->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *a, *add;
	listint_t *c;

	hptr = NULL;
	while (*h != NULL)
	{
		a = malloc(sizeof(listp_t));

		if (a == NULL)
			exit(98);

		a->p = (void *)*h;
		a->next = hptr;
		hptr = a;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
		}

		c = *h;
		*h = (*h)->next;
		free(c);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);
}
