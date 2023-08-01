#include "lists.h"
/**
 * insert_nodeint_at_index - adds a new node to a linked list
 * @head : head of the list
 * @idx  : index of the list where the new node will be added
 * @n    : value for the new node to be added
 * Return: the address of the new node or NULL if function fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *bin = *head;
unsigned int node;

new_node = malloc(sizeof(listint_t));

if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = bin;
*head = new_node;
return (new_node);
}

for (node = 0; node < (idx - 1); node++)
{
if (bin == NULL || bin->next == NULL)
return (NULL);

bin = bin->next;
}

new_node->next = bin->next;
bin->next = new_node;

return (new_node);
}
