#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new 
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);

	a->n = n;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
	}
	else
	{
		a->next = h->next;
		h->next = a;
	}

	return (a);
}