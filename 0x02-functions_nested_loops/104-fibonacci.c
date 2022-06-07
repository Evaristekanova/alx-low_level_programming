#include <stdio.h>
/**
 * main-fibbonaci seris
 *
 * Return:0 if success
 */
int main(void)
{
	int i;
	unsigned long int j, k, z;

	j = 1;
	k = 2;
	printf("%lu, %lu, ", j, k);
	for (i = 0; i <= 95; i++)
	{
		z = j + k;
		if (i != 95)
		{
			printf("%lu,", z);
			printf(" ");
			j = k;
			k = z;
		}
		else
		{
			printf("%lu", z);
		}
	}
	printf("\n");
	return (0);
}
