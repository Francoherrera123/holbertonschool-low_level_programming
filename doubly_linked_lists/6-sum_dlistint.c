#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - Sum of all the data of the list
 * @head: list
 * Return: return of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
