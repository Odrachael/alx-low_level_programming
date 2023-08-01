#include "lists.h"
/**
 * size_t print_listint_safe -  this function prints a listint_t
 * @head: head of linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
        const listint_t *node1 = head;
        const listint_t *node2 = head;
        size_t count = 0;

        while (node1 != NULL && node2 != NULL && j->next != NULL)
        {
                node1 = node1->next;
                node2 = node2->next->next;

                if (node1 == node2)
                        exit(98);

                count++;
        }
        return count;
}
