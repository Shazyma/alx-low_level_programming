#include "lists.h"
/**
 * list_len - Calculate the number of elements
 * @h: Pointer to a list
 * Return: Integer
 **/
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int a = 0;
temp = h;
while (temp)
{
a++;
temp = temp->next;
}
return (a);
}
