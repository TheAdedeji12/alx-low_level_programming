#include "main.h"
/**
 * _isdigit - checks for digit 0 - 9
 * @c: function to be checked
 * Return: 1 if c is digit
 * on error: return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
