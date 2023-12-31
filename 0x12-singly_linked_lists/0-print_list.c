#include "lists.h"
/**
 * print_list - outputs the elements of list_t list
 * @h: singly list
 * Return: outputs number of elements in the linked list.
 */
size_t print_list(const list_t *h)
{
	size_t number_of_elements;

	number_of_elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		number_of_elements++;
	}
	return (number_of_elements);
}
