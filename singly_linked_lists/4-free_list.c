#include "lists.h"
/**
 * free_list - free list_t
 * @head: pointer to head
 */
void free_list(list_t *head)
{
	list_t *r;

	while (head)
	{
		r = head;
		head = head->next;
		free(r->str);
		free(r);
	}
}
