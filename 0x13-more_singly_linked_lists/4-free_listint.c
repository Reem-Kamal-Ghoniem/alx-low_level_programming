#include "lists.h"

/**
 *free_listint - a function that frees a listint_t list
 *@head: head pointer
 *Return: void
 */

void free_listint(listint_t *head)
{
	list_t *save;

	while (head)
	{
		save = head->next;
		free(head);
		head = save;
	}
}

