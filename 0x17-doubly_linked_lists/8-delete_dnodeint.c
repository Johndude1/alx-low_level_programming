#include "lists.h"

/**
* delete_dnodeint_at_index - delete node at index of a dlistint_t linked list
* @head: the head of the list
* @index: the index of the new node
* Return: 1 if success, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *h1;
dlistint_t *h2;
unsigned int a;

h2 = *head;
if (h2 != NULL)
while (h2->prev != NULL)
h1 = h2->prev;
a = 0;

while (h1 != NULL)
{
if (a == index)
{
if (a == 0)
{
*head = h1->next;
if (*head != NULL)
(*head)->prev = NULL;
}
else
{
h2->next = h1->next;
if (h1->next != NULL)
h1->next->prev = h2;
}
free(h1);
return (1);
}
h2 = h1;
h1 = h1->next;
a++;
}
return (-1);
}
