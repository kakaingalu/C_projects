/*include header*/
#include "list.h"

/**
 * new_node - it adds node at the beginning of the list
 * @head: its a double pointer pointing to the head of the list
 * @value: it the value to be assigned to the node
 *
 * Return: void.
 */
void new_node_end(struct node **head, int value)
{
	/*Declare the new node*/
	struct node *nodeD;
	struct node *temp;
	/*Assign memory to the node using malloc*/
	nodeD = (struct node *) malloc(sizeof(struct node));
	
	/*check malloc for error*/
	if (nodeD == NULL)
	{
		return;
	}

	/*Assign value to the new node*/
	nodeD->age = value;	
	
	/*the temp pointer points to the head*/
	temp = *head;

	 /*check if the list is empty*/
        while (temp->next != NULL)
        {        
                temp = temp->next;
        }

	/*last pointer points to null*/
	nodeD->next = NULL;

	/*point to the last node*/
	temp->next = nodeD;

	printf("Successfully added new node at end\n");
}


