#include "main.h"
/**
 * _isalpha: entry point
 *
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 *
 * Returns 0 otherwise
 *
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
