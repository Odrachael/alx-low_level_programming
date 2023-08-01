#include "lists.h"
/**
 * print_listint - a function that prints all the elements of a linked list
 * @h: head of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *element_block = h;
	size_t num_of_element = 0;

	while (element_block != NULL)
	{
		printf("%d\n", element_block->n);
		num_of_element += 1;
		element_block = element_block->next;
	}
	return (num_of_element);
}
