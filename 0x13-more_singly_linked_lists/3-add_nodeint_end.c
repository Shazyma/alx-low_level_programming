#include "lists.h"

/**
 * add_nodeint_end - add a new node
 * @head: head of a list.
 * @n: n element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *a;
	listint_t *temp;

	(void)temp;

	a = malloc(sizeof(listint_t));

	if (a == NULL)
		return (NULL);

	a->n = n;
	a->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = a;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = a;
	}

	return (*head);
}
