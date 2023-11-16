#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a linked list
 * @head: pointer to list
 */
void free_list(list_t *head)
{
list_t *t;
while (head)
{
t = head->next;
free(head->str);
free(head);
head = t;
}
}
