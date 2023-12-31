#include "lists.h"

/**
* sum_dlistint - return the sum of all the data of a doubly linked list
* @head: the head of a list
* Return: return sum of the data
*/
int sum_dlistint(dlistint_t *head)
{
int sum;
sum = 0;
if (head != NULL)
{
while (head->prev != NULL)
head = head->prev;
while (head != NULL)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
