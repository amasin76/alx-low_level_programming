#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: double pointer to the head of the list
 * @str: string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *temp;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;
	new_node->len = len;

	new_node->next = NULL;

	if (!(*head))
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}

int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Anne");
	add_node_end(&head, "Colton");
	add_node_end(&head, "Corbin");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Danton");
	add_node_end(&head, "David");
	add_node_end(&head, "Gary");
	add_node_end(&head, "Holden");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Ian");
	add_node_end(&head, "Jay");
	add_node_end(&head, "Jennie");
	add_node_end(&head, "Jimmy");
	add_node_end(&head, "Justin");
	add_node_end(&head, "Kalson");
	add_node_end(&head, "Kina");
	add_node_end(&head, "Matthew");
	add_node_end(&head, "Max");
	add_node_end(&head, "Michael");
	add_node_end(&head, "Ntuj");
	add_node_end(&head, "Philip");
	add_node_end(&head, "Richard");
	add_node_end(&head, "Samantha");
	add_node_end(&head, "Stuart");
	add_node_end(&head, "Swati");
	add_node_end(&head, "Timothy");
	add_node_end(&head, "Victor");
	add_node_end(&head, "Walton");
	print_list(head);
	return (0);
}
