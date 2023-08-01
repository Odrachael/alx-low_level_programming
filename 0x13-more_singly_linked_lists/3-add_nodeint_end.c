#include "lists.h"

/**
 * add_nodeint - adds a node at the end of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node
	listint_t *element_node= *head

	last_node = malloc(sizeof(listint_t));
	if (last_node != NULL)
	{
		last_node->n = n;
		last_node->next = NULL;
	}
	else
		return (NULL);
	if (element_node != NULL)
	{
		while (element_node->next !=NULL)
			element_node = element_node->next;
		element_node-> = last_node;
	}
	else
		*head = last_node;
	return (last_node);
}
