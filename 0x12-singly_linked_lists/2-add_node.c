#include "lists.h"
/**
 * add_node - adds  new node at  beginning of the list
 * @head: head of list.
 * @str: string storing in list.
 * Return: address of the head.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_val;
	size_t new_character;

	new_val = malloc(sizeof(list_t));
	if (new_val == NULL)
		return (NULL);
	new_val->str = strdup(str);
	for (new_character = 0; str[new_character]; new_character++)
		;
	new_val->len = new_character;
	new_val->next = *head;
	*head = new_val;
	return (*head);
}
