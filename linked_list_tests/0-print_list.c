#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the linked list
 *
 * Return: 0
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;
	
	while(h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		 	printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}
	return (num);
}	
