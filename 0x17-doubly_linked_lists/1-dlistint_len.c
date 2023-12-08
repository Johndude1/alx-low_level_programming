#include "lists.h"

/**
* dlistint_len - will return the numbers of element in a doubly linked list
* @h: the head of the list
* Return: the numbers of the node
*/
size_t dlistint_len(const dlistint_t *h)
{
int i;
i = 0;

if (h == NULL)
return (i);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
i++;
h = h->next;
}
return (i);
}
