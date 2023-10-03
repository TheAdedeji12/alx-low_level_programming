#include "main.h"
/**
 * _isalpha - checks for alphabet, can be lowercase or uppercase
 * @c: parameters to he checked
 * Return: 1 on success
 * on error: return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
