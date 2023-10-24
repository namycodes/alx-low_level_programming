#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: pointer of head node of the list
 * Return: Return elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_count = 0; /* variable to store the count */

    /* loop through the list until NULL is reached */
	while (h != NULL)
	{
		number_count++; /* increment the number_count */
		h = h->next; /* move to the next node */
	}
	return (number_count); /* return the number_count */
}
