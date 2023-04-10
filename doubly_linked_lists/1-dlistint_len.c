#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - Length of a List
 * @h: List
 * Return: return number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int lenght = 0;

	while (h)
	{
		lenght++;
		h = h->next;
	}
	return (lenght);
}
