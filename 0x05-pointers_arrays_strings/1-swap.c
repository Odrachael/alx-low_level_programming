#include "main.h"
/**
 * swap_int - function name
 * @a: first integer
 * @b: second integer
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int value = *a;
	*a = *b;
	*b = value;
}
