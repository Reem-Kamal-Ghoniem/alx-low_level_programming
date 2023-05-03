#include "lists.h"

/**
 *sum_listint - a function that returns the sum of all the data
 *(n) of a listint_t linked list.
 *@head: list head
 *Return: sum
 */
int sum_listint(listint_t *head)
{
	listint_t *node;
	size_t sum = 0;

	node = head;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}
return (sum);
}
