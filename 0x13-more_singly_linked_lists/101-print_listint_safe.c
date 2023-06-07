#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
  *looped_listint_len - prints a listint_t linked list.
  *@head: pointer to the head of the listint_t
  *Return: the number of nodes in the list
  *Otherwise - the number of unique nodes in the list.
  */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *x, *y;
	size_t node = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	x = head->next;
	y = (head->next)->next;

	while (y)
	{
		if (x == y)
		{
			x = head;
			while (x != y)
			{
				node++;
				x = x->next;
				y = y->next;
			}

			x = x->next;
			while (x != y)
			{
				node++;
				x = x->next;
			}
			return (node);
		}

		x = x->next;
		y = (y->next)->next;
	}

	return (0);
}

/**
  *print_listint_safe - Prints a listint_t list safely.
  *@head: pointer to the head of the listint_t list.
  *Return: The number of nodes in the list.
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, ind = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (ind = 0; ind < node; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
