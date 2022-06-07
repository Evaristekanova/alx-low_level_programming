#include <stdio.h>
/**
 * main-fibbonaci seris
 *
 * Return:0 if success
 */
int main(void)
{
	int i;
	int j, k, z;

	j = 1;
	k = 2;
	printf("%d, %d", j, k);
	for (i = 0; i <= 50; i++)
	{
		z = j + k;
		if (i != 50)
		{
			printf("%d,", z);
			printf(" ");
			j = k;
			k = z;
		}
		else
		{
			printf("%d", z);
		}
	}
}


