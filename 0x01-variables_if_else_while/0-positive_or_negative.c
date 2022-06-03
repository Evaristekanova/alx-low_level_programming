#include <stdio.h>
/**
 * main-chacking if number is positive or not
 *
 * Return:0 if success
 */
int main(void)
{
	int n = 0;

	printf("Enter any number you want:\n");

		if (n > 0)
		{
			printf("%d is great than 0\n", n);
		}
		else if (n < 0)
		{
			printf("%d is less than 0\n", n);
		}
		else
		{
			printf("%d is equal to zero\n", n);
		}
		return (0);
}
