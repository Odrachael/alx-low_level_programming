#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers.
 * @n: resepresents the number of arguments
 * @separator: resepresents the seperator of the numbers
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* creating va_list to store the variable argument list */
	va_list num;
	unsigned int j;

	/* init valist for the number of arguments */
	va_start(num, j);

	/* loop through/access all arguments stored in the valist */
	for (j = 0; j < n; j++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (j < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(num);
	printf("\n");
}
