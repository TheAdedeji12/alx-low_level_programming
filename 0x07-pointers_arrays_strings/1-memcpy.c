#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: a pointer to the destination memory
 * @src: source memory
 * @n: number of bytes
 * Return: always 0 (success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
