#include "main.h"
#include <stdio.h>
/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */
void times_table(void)
{
	int i, k, result;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = 0 ; k < 10 ; k++)
			result = i * k;
		{
			if (i == 0)
			printf("%d, ", result);
				else
				{
					printf("%2d", result);
					if (k != 9)
						printf(", ");
				}
			}
			printf("\n");
	}
}
