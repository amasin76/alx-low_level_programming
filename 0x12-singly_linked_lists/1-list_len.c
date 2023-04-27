#include "lists.h"
#include <stdio.h>
#include <string.h>

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

int main(void)
{
	list_t *head;
	list_t *new;
	list_t hello = {"World", 5, NULL};
	size_t n;

	head = &hello;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = list_len(head);
	printf("-> %lu elements\n", n);
	free(new->str);
	free(new);
	return (0);
}
