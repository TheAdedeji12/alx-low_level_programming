#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: parameters to be checked
 * Return: 1 on success
 * on error: return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
