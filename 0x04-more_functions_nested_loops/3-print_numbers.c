#include "main.h"
/**
 * print_numbers - this is the function prints numbers, from 0 to 9
 * followed by a new line
 * return: 0
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
	_putchar(i + '0');
	}
	_putchar('\n');
}
