#include <stdio.h>
/**
 * main-chacking if number is positive or not
 *
 * Return:0 if success
 */
int main(void)
{
	int n = 98;

		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			printf("%d is zero\n", n);
		}
		return (0);
}
