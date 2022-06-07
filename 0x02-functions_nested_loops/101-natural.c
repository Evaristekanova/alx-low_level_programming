#include "main.h"
#include <stdio.h>
/**
 * main-sum of number which is multiple os 3 and 5
 *
 * Return:0 if success
 */
int main(void)
{
	int i;
	int sum;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i / 3 == 0) || (i / 5 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}

