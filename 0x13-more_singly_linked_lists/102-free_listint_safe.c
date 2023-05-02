#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 * @h: pointer to the head of the list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *temp;

	for (; *h; ++size)
	{
		if (*h <= (*h)->next)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;
		}
	}
	return (size);
}
