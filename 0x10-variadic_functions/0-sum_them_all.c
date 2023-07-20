#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: the number of arguments
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...i)

{
	/* create va_list to store the variable arg */
	va_list num;
	unsigned int y;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(num, n);
	/* loop all arg stored in va_list */
	for (y = 0; y < n; y++)
		sum += va_arg(num, int);
	va_end(num);
	return (sum);
}
