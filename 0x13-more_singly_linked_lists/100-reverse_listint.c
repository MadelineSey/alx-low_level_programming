#include "lists.h"

/**
  *reverse_listint - reverses a linked list listint_t
  *@head: pointer to the first node in the list listint_t
  *Return: pointer to the first node in the reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
