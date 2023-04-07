#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - add new node in end of the list
 * @head: list
 * @str: string
 *
 * Return: return address new element in the list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *r = *head;
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (r->next)
	{
		r = r->next;
	}
	r->next = newnode;
	return (newnode);
}
