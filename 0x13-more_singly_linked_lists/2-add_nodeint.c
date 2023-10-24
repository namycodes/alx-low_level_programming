#include "lists.h"

/**
 * add_nodeint - adds a new node at the bg of list
 * @head: double pointer to head node listss
 * @n: data to be stored in the new node of the linked lisst
 * Return: address of the new node, and NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *val_new_node; /* variable to storing the new node and make it fun */
	/* allocate memory for the new node */
	val_new_node = malloc(sizeof(listint_t));
	if (val_new_node == NULL) /* check if memory allocation failed , if it did return NULL*/
		return (NULL);
	/* assign data and next pointer to new node of the list mate*/
	val_new_node->n = n;
	val_new_node->next = *head;
	/* update head pointer to point to the new node kimbaaaa*/
	*head = val_new_node;
	return (val_new_node); /* return  address of new node */
}
