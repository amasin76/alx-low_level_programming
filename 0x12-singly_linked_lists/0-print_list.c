#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints a linked list elements
 * @h: pointer to the first of the list
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	for (; h; h = h->next, count_nodes++)
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

	return (count_nodes);
}
