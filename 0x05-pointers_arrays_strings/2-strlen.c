#include "main.h"
/**
 * _strlen - function name
 * @s: character parameter
 * Return: lenght
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
