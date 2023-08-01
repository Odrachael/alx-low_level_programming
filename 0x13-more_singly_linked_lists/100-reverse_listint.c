#include "lists.h"
/**
 * reverse_listint - this function reverses a listint_t linked list.
 * @head: head of linked list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first_variable;
	listint_t *second_variable;

	first_variable = NULL;
	second_variable = NULL;

	while (*head != NULL)
	{
		second_variable = (*head)->next;
		(*head)->next = first_variable;
		first_variable = *head;
		*head = second_variable;
	}
	*head = first_variable;
	return (*head);
}
