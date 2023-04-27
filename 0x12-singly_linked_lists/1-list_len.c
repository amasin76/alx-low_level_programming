#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the number of elements in a linked list_t
 * @h: pointer to the first of the list
 * Return: the number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t count_elements = 0;

	for (; h; count_elements++, h = h->next)
		;
	return (count_elements);
}
