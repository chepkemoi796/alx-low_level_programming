#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees list_t
 * @head: pointer to nodes
 * Return: p
 */
void free_list(list_t *head)
{
list_t *p;
for (; head; )
{
p = head->next;
free(head->str);
free(head);
head = p;
}
}
