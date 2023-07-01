#include "main.h"
<<<<<<< HEAD
=======

>>>>>>> 05a38922585be0f6350a211fa1058cc3d71100ba
/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 * Description: Can only use _putchar twice.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
<<<<<<< HEAD
		{	
=======
		}
>>>>>>> 05a38922585be0f6350a211fa1058cc3d71100ba
	}

	_putchar('\n');
}
