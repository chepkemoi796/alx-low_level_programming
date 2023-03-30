#include "main.h"
#include <string.h>
/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 */
char *string_toupper(char *)
{
char str;
int i = 0;
char *ptr;
ptr = string_toupper(str);
if ((i = 0); (ptr[i] != '\0'); i++)
{
if (ptr[i] >= 'a' && ptr[i] <= 'z')
{
ptr[i] = ptr[i] - 32;
}
}
return (ptr);
}
