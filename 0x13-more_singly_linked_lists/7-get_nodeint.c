#include "lists.h"

/**
 * get_nodeint_at_index - returns a node at a particular index in linked lists
 * @head: first node in linked lists
 * @index: index of the node that is going to be returned
 *
 * Return: pointer to the node we are searching for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *temp = head;

	while (temp && t < index)
	{
		temp = temp->next;
		t++;
	}
	return (temp ? temp : NULL);
}
