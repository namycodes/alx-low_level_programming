#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: head of list.
 * Return: nothing return.
 */

void free_list(list_t *head)
{
	list_t *current_pos;

	while ((current_pos = head) != NULL)
	{
		head = head->next;
		free(current_pos->str);
		free(current_pos);
	}
}
