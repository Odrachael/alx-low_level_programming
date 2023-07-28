#include "lists.h"
/**
 * add_node - add a new node at the beginning
 * @head: head of the linked list.
 * @str: string to duplicate
 * Return: the head address.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t nd;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (nd = 0; str[nd]; nd++)
		;

	new_node->len = nd;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
