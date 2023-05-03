#include "lists.h"

/**
*get_nodeint_at_index - a function that returns the nth node of a listint_t linked list.
*@head: pointer to the head of the list
*@index: index of the node
*Return: node address
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i = 0;

	for (i = 0; head != NULL; i++)
	{
			if (i == index)
			{
				node =  head;
				break;
			}
			head = head->next;
		else
			return (NULL);
	}
	return (node);
}
