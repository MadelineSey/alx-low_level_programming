#include "lists.h"

/**
  *free_listint2 - frees a linked list listint_t
  *@head: pointer to the listint_t list
  *Return: NULL
  */
void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head)
	{
		node = (*head)->next;
		free(*head);
		*head = node;
	}
	*head = NULL;
}
