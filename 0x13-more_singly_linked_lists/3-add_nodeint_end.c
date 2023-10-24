#include "lists.h"

/**
 * add_nodeint_end - function
 * @head: pointer to a pointer to head of the list
 * @n: data value for the new node data values
 * Return: the address of the new node, and return NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    /* create a new node allocate memory*/
	listint_t *new_node_data = malloc(sizeof(listint_t));
	if (new_node_data == NULL)
		return (NULL);
	/* assign the data value and set p to NULL */
	new_node_data->n = n;
	new_node_data->next = NULL;
	/* if the head pointer is null, make the new node to be the head */
	if (*head == NULL)
	{
		*head = new_node_data;
		return (new_node_data);
	}
	/* otherwise, traverse the list until it has reached the last node */
	listint_t *last = *head;
	while (last->next != NULL)
		last = last->next;

	/* make the next poinew node */
	last->next = new_node_data;

	/* returns the new node */
	return (new_node_data);
}
