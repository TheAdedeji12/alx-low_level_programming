#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 10 ; i <= 99 ; i++)
	for (j = i ; j <= 99 ; j++)
	if (i != j)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');
	}
	{
		putchar((j / 10) + '0');
		putchar((j % 10) + '0');
	}
	putchar('\n');
	return (0);
}
