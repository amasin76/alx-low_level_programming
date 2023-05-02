#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list of integers safely
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current, *temp;

	if (!head)
	{
		exit(98);
	}

	current = head;

	while (current)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		temp = current;
		current = current->next;

		if (temp < current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			break;
		}
	}

	return (count);
}
