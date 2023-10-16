#include "main.h"
#include <ctype.h>
/**
 *  _isupper - function name for uppercase letters
 *
 *  @c: the character to print
 *
 *  Return: 1 if c is uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
