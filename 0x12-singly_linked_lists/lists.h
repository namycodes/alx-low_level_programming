#ifndef _LINKEDLISTS_
#define _LINKEDLISTS_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct list_s - singly linked liststs
 * @string: string - (malloc stringg)
 * @length: length of a string
 * @next_node: pointing to next node
 *
 * Description: node structure
 */
typedef struct list_s
{
	char *string;
	unsigned int length;
	struct list_s *next_node;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *string);
list_t *add_node_end(list_t **head, const char *string);
void free_list(list_t *head);

#endif
