#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - free all node of list
 * @head: list
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
