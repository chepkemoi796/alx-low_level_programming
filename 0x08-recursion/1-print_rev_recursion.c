#include <stdio.h>
#include <stdlib.h>
/*
 *_print_rev_recursion - prints string in 
 *
 * Return : void
 */
void _print_rev_recursion(char *s)
{
_print_rev_recursion(s + 1);
printf("%c", *s);
}
