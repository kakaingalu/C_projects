#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct node - is the singly linked list
 * @age: Data stored in node
 * @next: pointer to the next node
 *
 * Description: singly linked list node structure
 */
struct node
{
	int age;
	struct node *next;
};
void new_node(struct node **head, int value);
void new_node_end(struct node **head, int value);
#endif/*_LIST_H_*/
