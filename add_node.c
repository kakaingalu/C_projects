/*include header*/
#include "list.h"

/**
 * new_node - it adds node at the beginning of the list
 * @head: its a double pointer pointing to the head of the list
 * @value: it the value to be assigned to the node
 *
 * Return: void.
 */
void new_node(struct node **head, int value)
{
	/*Declare the new node*/
	struct node *nodeAA;

	/*Assign memory to the node using malloc*/
	nodeAA = (struct node *) malloc(sizeof(struct node));

	/*Assign value to the new node*/
	nodeAA->age = value;

	/*check if the list is empty*/
	if (*head == NULL)
	{
		nodeAA->next = NULL;
		return;
	}
	else
	{
		/*
		 * if list is not empty we point the node to
		 * where the head was pointing
		 */
		nodeAA->next = *head;
	}

	/*the head points to the new node*/
	*head = nodeAA;

	printf("Successfully added new node\n");
}


