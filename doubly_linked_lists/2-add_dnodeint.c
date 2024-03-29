#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - add new node in the list
 * @head: list
 * @n: integer
 * Return: return address new element in the list
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	if (*head)
		*&(*head)->prev = new;
	*head = new;
	return (new);
}
