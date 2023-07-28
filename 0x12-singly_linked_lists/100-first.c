#include <stdio.h>
/**
 * firstly - a function that prints some strings to stdout
 * Return: zero return
 */
void __attribute__((constructor)) first()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
