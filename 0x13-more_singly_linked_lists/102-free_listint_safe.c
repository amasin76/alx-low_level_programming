#include "lists.h"

/**
 * free_listint_safe - frees a list safely
 * @h: pointer to the head of the list
 * Return: number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	listint_t *slow, *fast;

	if (!h || !*h)
		return (count);

	slow = *h;
	fast = *h;

	while (slow && fast && fast->next)
	{
		count++;
		temp = slow;
		slow = slow->next;
		fast = fast->next->next;
		free(temp);

		if (slow == fast)
		{
			free(slow);
			*h = NULL;
			return (count + 1);
		}
	}

	while (slow)
	{
		count++;
		temp = slow;
		slow = slow->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
