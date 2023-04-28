#include "lists.h"
/**
 * print_list - prints a singly linked list
 * @h: pointer to the list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;
	for (i = 0; h != NULL; i++)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
