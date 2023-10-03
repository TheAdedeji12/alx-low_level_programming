#include "main.h"

/**
 * _strspn - gets the lenght of a previous string
 * @s: a pointer to the null terminad string
 * @accept: a pointer to the null terminated string containing characters
 * Return: always 0 (success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, check;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				check = 1;
			}
		}
			if (check == 0)
				return (value);
		}
		return (value);
}
