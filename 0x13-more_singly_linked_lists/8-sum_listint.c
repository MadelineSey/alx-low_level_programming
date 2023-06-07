#include "lists.h"

/**
  *sum_listint - calculates the sum of all the data (n)
  *of a listint_t linked list.
  *@head: first node in the linked list
  *Return: the sum of all the data (n) of a listint_t linked list.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
