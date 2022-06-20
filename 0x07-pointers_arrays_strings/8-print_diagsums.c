#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of diagonals
 *
 * @size:size of array
 *
 * @a:arrya as an argument
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == 0)
			{
				s1 += a[i][j];
			}
			if (i + j == size - 1)
			{
				s2 += a[i][j];
			}
		}
	}
	printf("%d, %d\n", s1, s2);
}
