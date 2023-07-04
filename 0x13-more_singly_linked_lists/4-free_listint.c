#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees listint_t list
 * @head: pointer to list to be freed
 * Return: void
 */
void free_listint(listint_t *head)
{
listint_t *q;
while (head)
{
q = head->next;
free(head);
head = q;
}
}
