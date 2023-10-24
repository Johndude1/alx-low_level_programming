#include "lists.h"

/**
* listint_len- A function that returns the numbers of element in a linked list
* @h: pointer to the size_t
* Return: returns the numbers of nodes
*/

size_t listint_len(const listint_t *h)

{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
