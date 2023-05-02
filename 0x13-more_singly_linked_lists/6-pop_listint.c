#include "lists.h"

/**
*pop_listint - deletes the first node
*@head: head
*Return: deleted node data
*/

int pop_listint(listint_t **head)
{
	listint_t *save;
	int num;

	if (*head == NULL)
		return (0);

	save = (*head)->next;;
	num = (*head)->n;
	free(save);

	*head = save;
	return (num);
}
