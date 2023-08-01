#include "lists.h"
/**
 * free_listint2 -  this function frees a listint_t list.
 * @head: head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *bin;

	if (head == NULL)
	return;

	while (*head)
	{
		bin = *head;
		*head = (*head)->next;
		free(bin);
	}
	head = NULL;
}
