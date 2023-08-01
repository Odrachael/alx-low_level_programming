#include "lists.h"
/**
 * pop_listint - this function deletes the head node
 * @head: head of list
 * Return: the head node's data(n).
 */
int pop_listint(listint_t **head)
{
	listint_t *bin;
	int n;

	bin = *head;

	if (bin == NULL)
	return (0);

	*head = bin->next;
	n = bin->n;
	free(bin);
	return (n);
}
