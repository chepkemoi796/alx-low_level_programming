#include <stdlib.h>
#include "main.h"
/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: string
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
int a, b, i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
b = write(a, text_content, i);
if (a == -1 || b == -1)
return (-1);
close(a);
return (1);
}
