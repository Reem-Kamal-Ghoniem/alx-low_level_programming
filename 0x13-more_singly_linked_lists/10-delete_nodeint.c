#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: pointer to head pointer of first node in a linked list
 * @index: element index in a linked list
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *node_next;
	unsigned int count = 0;

	node = *head;
	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}
	if (index == 1)
	{
		node = (*head)->next;
		(*head)->next = node->next;
		free(node);
		return (1);
	}
	while (count < index - 1)
	{
		if (node->next)
			return (-1);
		count++;
		node = node->next;
		node_next = node->next;
	}
	node->next = node_next->next;
	free(node_next);

	return (1);
}
