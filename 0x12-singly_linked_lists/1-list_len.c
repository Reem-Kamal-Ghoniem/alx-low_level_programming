#include "lists.h"
/**
 * list_len - prints the length of the list
 * @h: pointer to the list
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{

		h = h->next;
	}
	return (i);
}
