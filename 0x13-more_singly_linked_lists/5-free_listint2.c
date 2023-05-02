#include "lists.h"

/**
 *free_listint2 - a function that frees a listint_t list
 *@head: head pointer
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *save;

	while (*head)
	{
		save = *head->next;
		free(*head);
		*head = save;
	}
}
