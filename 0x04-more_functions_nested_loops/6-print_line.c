#include "main.h"
/**
 * print_line - this is the function name for printing a new line
 * @n: number of times '_' should be printed
 * Return: print \n if n is 0 or less
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
			_putchar('\n');
		}
	}
}

