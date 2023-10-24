#ifndef NAMY_LIST
#define NAMY_LIST

#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * struct listint_s - list
 * @n: interger
 * @next: next nde in list
 * Description: node structure
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
#endif
