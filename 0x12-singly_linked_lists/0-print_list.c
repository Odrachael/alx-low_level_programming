#include "lists.h"
/**
 * print_list - function that prints all the elements.
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nd;

	nd = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nd++;
	}
	return (nd);
}
