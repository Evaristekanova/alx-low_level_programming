#include "main.h"
#include <stdio.h>
/**
 * print_to_98-print nutural number within given range
 *
 * @n:parameter for the function
 * Return:void
 */
void print_to_98(int n)
{
	int i;
	int j;

	for (i = n; i <= 98; i++)
	{
		printf("%d,", i);
		printf(" ");

		if (i == 98)
		{
			printf("%d", i);
		}
	}

	for (j = n; j >= 98; j--)
	{
		printf("%d,", j);
		printf(" ");

		if (j == 98)
		{
			printf("%d", j);
		}
	}
}
