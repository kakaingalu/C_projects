#include "lists.h"

/**
 * list_len - returns the number of elements in linked list
 * @h: pointer to the linked list
 *
 * Return: 0
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}	
