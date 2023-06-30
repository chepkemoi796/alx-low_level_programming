#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * *add_node_end - adds node at the end
 * @head: double pointer
 * @str: element
 * Return: q
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *r;
list_t *q;
list_t *p = *head;
unsigned int i = 0;
for (; str[i]; )
i++;
q = malloc(sizeof(list_t));
if (q == NULL)
return (NULL);
r = strdup(str);
q->str = r;
q->len = i;
q->next = NULL;
if (*head == NULL)
{
*head = q;
return (q);
}
while (p->next)
p = p->next;
p->next = q;
return (q);
}
