#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t
 * @head: pointer to pointer of first node of listint_t
 * @n: integer to be included in new node
 * Return: address of the new element or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p;
	listint_t *t = *head;

	p = malloc(sizeof(listint_t));
	if (!p)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (NULL);
	}
	while (t->next)
		t = t->next;
	t->next = p;
	return (p);
}
