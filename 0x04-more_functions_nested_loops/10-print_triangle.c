#include "main.h"
/**
 * print_triangle - prints a triangel with the character '#'
 * @size: the shape of triangle
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j, k;

		for (i = 0 ; i <= size ; i++)
		{
			for (j = 0 ; j < size - i ; j++)
				_putchar(' ');
		}
		for (k = 0 ; k < i ; k++)
		{
			_putchar('#');
		}
			_putchar('\n');
	}
}
