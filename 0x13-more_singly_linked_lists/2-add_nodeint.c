#include "lists.h"

/**
 * add_nodeint - adds a new node at the bg of list
 * @head: double pointer to head node listss
 * @n: data to be stored in the new node of the linked lisst
 * Return: address of the new node, and NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *val_new_node; /* variable to store the new node */
	/* allocate memory for the new node */
	val_new_node = malloc(sizeof(listint_t));
	if (val_new_node == NULL) /* check if memory allocation failed */
		return (NULL);
	/* assign data and next pointer to the new node */
	val_new_node->n = n;
	val_new_node->next = *head;
	/* update head pointer to point to the new node */
	*head = val_new_node;
	return (val_new_node); /* return the address of the new node */
}
