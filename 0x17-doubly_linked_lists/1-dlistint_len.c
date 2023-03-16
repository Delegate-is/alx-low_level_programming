#include "lists.h"

/**
* dlistint_len - get the len of nodes in a doubly linked list
* @h: header of doubly linked list
* Return: number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;
	int iniprints = 0;

	for (i = 0; h != NULL; i++)
	{
		if (h->prev != NULL && iniprints == 0)
		{
			h = h->prev;
			continue;
		}
		else if (h->prev == NULL)
		{
			iniprints = 1;
			i = 0;
		}
		h = h->next;
	}
	return (i);
}
