#include "lists.h"
/**
 * list_len - outputs number of elements in a list
 * @h: linked list
 * Return: numbber of ele in a list
 */
size_t list_len(const list_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}
