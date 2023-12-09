#include "lists.h"

/**
* get_dnodeint_at_index - will return the nth node of a dlistint_t linked list
* @head: the head of the list
* @index: the index of the nth node
* Return: to return nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int a = 0;

while (head != NULL)
{
if (a == index)
{
return (head);
}
head = head->next;
a++;
}
return (NULL);
}

