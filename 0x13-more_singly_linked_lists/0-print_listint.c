#include "lists.h"
/**
 * print_listint - Func printing the elements of linked lists
 * @h: Head of linked list
 * Return: Returns size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t namy = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		namy++;
	}
	return (namy);
}
