#include "lists.h"

/**
* print_dlistint - A function to print all the elements of a dlistint_t list
* @h: the head of the list
* Return: to return the numbers of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
int count;
count = 0;

if (h == NULL)
return (count);
while (h->prev != NULL)
h = h->prev;
while (h != NULL)
{
printf("%d\n", h->n);
count++;
h = h->next;
}
return (count);
}