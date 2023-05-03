#include "lists.h"
/**
 * insert_nodeint_at_index - a function that inserts
 * a new node at a given position.
 * @head: pointer to head pointer of first node in linked list
 * @idx: index of list
 * @n: value integer
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp, *node;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	node = *head;

	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (*head);
	}

	while (node)
	{
		if (count == idx - 1)
		{
			tmp->next = node->next;
			node->next = tmp;
		}
		count++;
		node = node->next;
	}
	if (idx > count)
		return (NULL);
	return (tmp);
}
