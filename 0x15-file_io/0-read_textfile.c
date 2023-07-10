#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads and prints text
 * @filename: name of file
 * @letters: number of letters to print
 * Return: d
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t q, p, d;
char *ptr;
q = open(filename, O_RDONLY);
if (q == -1)
return (0);
ptr = malloc(sizeof(char) * letters);
p = read(q, ptr, letters);
d = write(STDOUT_FILENO, ptr, p);
free(ptr);
close(q);
return(d);
}
