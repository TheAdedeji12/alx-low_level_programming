#include <stdio.h>
/**
 * main - main function
 * Description - prints all possible combination of three digits
 * Return: always 0 (success)
 */
int main(void)
{
	int i, x, j;

	for (i = 0 ; i <= 9 ; i++)
	for (x = i + 1 ; x <= 9 ; x++)
	for (j = x + 1 ; j <= 9 ; j++)
	{
		putchar(i + '0');
		putchar(x + '0');
		putchar(j + '0');
		if (!(i == 7 && x == 8 && j == 9))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
