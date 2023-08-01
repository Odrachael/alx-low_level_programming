#include "lists.h"
/**
 * listint_len - a function that prints all the elements
 * @h: head of linked list
 * Return: the number of element
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *element_block = h;
	size_t num_of_element = 0;

	while (new_node != NULL)
	{
		num_of_element += 1;
		element_block = element_block->next;
	}
	return (num_of_element);
}
