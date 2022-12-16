#include "lists.h"

/**
 * add_node_end - adds new node at the end of a list_t list
 * @head: pointer to nodes
 * @str: string holding name of elements to be added
 *
 * Return: address of element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int num;
	list_t *new, *current;

	num = 0;

	while (str[num])
	{
		num++;
	}
	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = num;
	new->next = NULL;
	current = *head;

	if (current == NULL)
	{
		*head = new;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (*head);
}
