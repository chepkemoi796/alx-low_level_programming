#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes charcater c to stdout
 * @c: the charcter to print
 *
 * Return: On success 1
 * On error, -1 is returned and errno is set appropriately
 */
int _putchar(charc)
{
return (write(1, &c, 1));
}
