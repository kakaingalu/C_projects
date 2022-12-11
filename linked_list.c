/*Inclusion of header*/
#include "list.h"

/**
 * main - checks code or is where i add node
 *
 * Return: void
 */

int main(void)
{
	/*Declaration of nodes*/
	struct node *nodeA, *nodeB, *nodeC;

	/*Declaration of head pointer*/
	struct node *head;

	/*Declaration of temporary pointer*/
	struct node *temp;

	/*Allocating memory to nodes*/
	nodeA = (struct node *)malloc(sizeof(struct node));
	nodeB = (struct node *)malloc(sizeof(struct node));
	nodeC = (struct node *)malloc(sizeof(struct node));

	/*Assign values to the nodes*/
	nodeA->age = 77;
	nodeB->age = 47;
	nodeC->age = 27;

	/*Assign address values to the pointers*/
	nodeA->next = nodeB;
	nodeB->next = nodeC;
	nodeC->next = NULL;

	/*Use head pointer to point the first node*/
	head = nodeA;

	/*call the add node function*/
	new_node(&head, 88);

	/*Use temporary pointer to point to the first node*/
	temp = head;

	/*treverse through the nodes and print values*/
	while (temp->next != NULL)
	{
		printf("%d ---> ", temp->age);
		temp = temp->next;
	}
	printf("%d\n", nodeC->age);
	return (0);
}
