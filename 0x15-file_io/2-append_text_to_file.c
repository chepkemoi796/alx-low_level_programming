#include <stdlib.h>
#include "main.h"
/**
 * append_text_to_file - appends text to file
 * @filename: the name of file
 * @text_content: content to append
 * Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int k, j, i = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
while (text_content[i])
i++;
}
k = open(filename, O_WRONLY | O_APPEND);
j = write(k, text_content, i);
if (k == -1 || j == -1)
return (-1);
close(k);
return (1);
}
