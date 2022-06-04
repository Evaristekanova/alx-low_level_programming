#include <stdio.h>
/**
 * main-printing alphabet in lowwercase
 *
 * Return:0 if success
 */
int main(void)
{
	int n;

	srand(time(n));
	n = rand() - RAND_MAX / 2;

	if ((n % 10) > 5)
	{
		printf(" The last digit of %d is %d and greater than 5", n, (n % 10));
	}
	printf("\n");
	return (0);
}

