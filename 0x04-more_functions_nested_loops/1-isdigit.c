#include "main.h"
#include <ctype.h>
/**
 *  _isdigit - function name for digit
 *
 *  @c: the character to print
 *
 *  Return: 1 if c is a digit and 0 if otherwise
 */

int _isdigit(int c)
{
        if (c >= '0' && c <= '9')
                return (1);
        else
                return (0);
}
~
~
