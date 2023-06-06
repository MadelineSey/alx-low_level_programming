#include "lists.h"

/**
  *pop_listint - deletes the head node of a linked list listint_t
  *@head: pointer to the first element in the linked list listint_t
  *Return: the head node’s data (n) or 0 if the list is empty
  */
int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int node;

	if (!head || !*head)
		return (0);

	node = (*head)->n;
	newNode = (*head)->next;
	free(*head);
	*head = newNode;

	return (node);
}
