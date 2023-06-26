#include "main.h"

/**
 * rev_string - function name
 * @s: pointer to char
 * Return: 0
 */

void rev_string(char *s)
{
	char string;
	int a;
	int string1 = 0;
	int string2 = 0;

	while (s[string1] != '\0')
		string1++;

	string2 = string1 - 1;
		for (a = 0; a < string1 / 2; a++)
		{
			string = s[a];
			s[a] = s[string2];
			s[string2] = string;
			string2 -= 1;
		}
}
