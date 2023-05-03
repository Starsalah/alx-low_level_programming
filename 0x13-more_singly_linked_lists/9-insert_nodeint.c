#include "lists.h"

/**
 * insert_nodeint_at_index - puts a new node in linked list,
 * at a particular position
 * @head: pointer towards the first node in the list
 * @idx: index where the new node is going to be added to
 * @n: data to put in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (t = 0; temp && t < idx; t++)
	{
		if (t == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
