#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used
 *
 * Return: address of the newly added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	first_node = malloc(sizeof(listint_t));
	if (first_node != NULL)
	{
		first_node->n = n;
		first_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		first_node->next = *head;
	*head = first_node;
	return (first_node);
}
