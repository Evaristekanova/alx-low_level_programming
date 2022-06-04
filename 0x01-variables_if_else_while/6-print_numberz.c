#include <stdio.h>
/**
 * main-printing alphabet in lowwercase
 *
 * Return:0 if success
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('%d', a);
	}
	putchar('\n');
	return (0);
}
