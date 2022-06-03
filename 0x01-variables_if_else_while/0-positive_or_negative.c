#include <stdio.h>
/**
 * main-chacking if number is positive or not
 *
 * Return:0 if success
 */
int main(void)
{
	int n = 98;

	printf("Enter any number you want:\n");

		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		n = -98;
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		n = 0;
		else
		{
			printf("%d is zero\n", n);
		}
		return (0);
}
