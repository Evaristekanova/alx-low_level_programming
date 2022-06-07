#include <stdio.h>
/**
 * main-fibbonaci seris
 *
 * Return:0 if success
 */
int main(void)
{
	int i;
	long int j, k, z;

	j = 1;
	k = 2;
	printf("%ld, %ld, ", j, k);
	for (i = 0; i <= 47; i++)
	{
		z = j + k;
		if (i != 47)
		{
			printf("%ld,", z);
			printf(" ");
			j = k;
			k = z;
		}
		else
		{
			printf("%ld", z);
		}
	}
	printf("\n");
	return (0);
}


