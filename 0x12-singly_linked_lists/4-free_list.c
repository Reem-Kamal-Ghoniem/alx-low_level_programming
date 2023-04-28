#include "lists.h"

/**
 *free_list - a function that frees a list_t list
 *@head: head pointer
 *Return: void
 */

void free_list(list_t *head)
{
	list_t *save;

	while (head)
	{
		save = head->next;
		free(head->str);
		free(head);
		head = save;
	}
}
