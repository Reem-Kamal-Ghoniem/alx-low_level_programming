#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @head: pointer to the first node
 * @str: what needed to be in the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	char *dup_node;
	int len = 0;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	dup_node = strdup(str);
	if (dup_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while(str[len])
		len++;

	new_node->str = dup_node;
	new_node->len = len;
	new_node->next = *head;

	*head = new_node;

	return (new_node);

}
