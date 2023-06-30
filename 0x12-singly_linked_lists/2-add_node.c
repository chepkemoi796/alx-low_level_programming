#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node - adds a new node at the beginning
 * @str: element
 * @head: double pointer
 * Return: head
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *q;
char *p;
unsigned int i = 0;
for (; str[i]; )
i++;
q = malloc(sizeof(list_t));
if (q == NULL)
return (NULL);
p = strdup(str);
q->str = p;
q->len = i;
q->next = *head;
*head = q;
return (*head);
}
