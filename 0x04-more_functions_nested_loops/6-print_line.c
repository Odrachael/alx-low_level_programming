#include "main.h"
/**
 * print_line - this is the function name for printing a new line
 * @n: number of times '_' should be printed
 * Return: print \n if n is 0 or less
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
			_putchar('\n');
		}
	}
}
