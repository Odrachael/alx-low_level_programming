#include "main.h"
/**
 * print_alphabet_x10 - a function to  prints 10 times the alphabet.
 *
 * Return - 0
 */
void print_alphabet_x10(void)
{
	char k;
	int j;
		j = 0;

	while (j < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
		j++;
	}
}
