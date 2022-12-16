#include "lists.h"

/**
 * add_node - adds node at the beginning of a list_t list
 * @head - pointer to list_h
 * @str - the item to duplicate
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int num = 0;
	list_t *temp;
	
	while (str[num])
        {
                num++;
        }

	temp = malloc(sizeof(list_t));
	
	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->str = strdup(str); 
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = num;
	temp->next = *head;
	*head = temp;
	return (*head);
}
