#include "lists.h"

/**
  *add_nodeint_end - adds a node at the end of a linked listint_t list
  *@head: pointer to the first element in the list
  *@n: integer
  *Return: the address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *newNode = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (newNode->next)
		newNode = newNode->next;
	newNode->next = node;
	return (node);
}
