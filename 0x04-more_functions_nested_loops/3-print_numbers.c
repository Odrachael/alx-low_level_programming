#include "main.h"
/**
 * print_numbers - this is the function prints numbers, from 0 to 9
 * followed by a new line
 * return: 0
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c < '10'; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
