#include <stdio.h>
/**
 * main-printing all combination of two numbers from 0 to 100
 *
 * Return:0 if success
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			putchar((i % 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i != 98 && j != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
