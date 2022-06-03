#include <stdio.h>
/**
 * main-chacking if number is positive or not
 *
 * Return:0 if success
 */
int main(void)
{
	int a;

	printf("Enter any number you want:\n");

		if (a > 0)
		{
			printf("%d is great than 0", a);
		}
		else if (a < 0)
		{
			printf("%d is less than 0", a);
		}
		else
		{
			printf("%d is equal to zero", a);
		}
		return (0);
}
