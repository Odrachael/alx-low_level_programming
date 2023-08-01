#include "lists.h"

/**
 * free_listint - this function frees a linked list
 * @head: head of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *bin;

	while (head != NULL)
	{
		bin = head;
		head = head->next;
		free(bin);
	}
}
