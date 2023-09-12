#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, I;

	for (i = 0 ; i <= 9 ; i++)
	for (I = i + 1 ; I <= 9 ; I++)
	{
		putchar(i + '0');
		putchar(I + '0');
		putchar(',');
		putchar(' ');
	}
		putchar('\n');
	return (0);
}
