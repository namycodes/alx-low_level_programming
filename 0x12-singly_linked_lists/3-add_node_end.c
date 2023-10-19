#include "lists.h"
/**
 * add_node_end - adds a new node at the end
 * @head: head of the list.
 * @str: string to store.
 * Return: address of the head in the linked list.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_val, *temporary;
	size_t new_character;

	new_val = malloc(sizeof(list_t));
	if (new_val == NULL)
		return (NULL);
	new_val->str = strdup(str);
	for (new_character = 0; str[new_character]; new_character++)
		;
	new_val->len = new_character;
	new_val->next = NULL;
	temporary = *head;
	if (temporary == NULL)
	{
		*head = new_val;
	}
	else
	{
		while (temporary->next != NULL)
			temporary = temporary->next;
		temporary->next = new_val;
	}
	return (*head);
}
