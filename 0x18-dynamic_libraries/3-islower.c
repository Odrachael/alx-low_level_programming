#include "main.h"
/**
 * _islower -  checks for lowercase character.
 *@c: character to be checked
 * Return:  if lowercase, 0 if not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	return (0);
}
