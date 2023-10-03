#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: parameters to be checked
 * Return: 1 on sucess
 * on error: return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
