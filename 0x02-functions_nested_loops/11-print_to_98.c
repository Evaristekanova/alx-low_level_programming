#include "main.h"
/**
 * print_to_98-print nutural number within given range
 *
 * @n:parameter for the function
 * Return:void
 */
void print_to_98(int n)
{
	int m;
	m = n;

	for (m =n; m < 98; m++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}

	for (m = n; m > 98; m--)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		
	}
}
