#include "main.h"
/**
 * print_line-drowing line using underscore
 *
 * @n:parameter of the function
 *
 * Return:value
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
