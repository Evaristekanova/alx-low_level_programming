#include "main.h"
/**
 * print_to_98-print nutural number within given range
 *
 * @n:parameter for the function
 * Return:void
 */
void print_to_98(int n)
{
	_putchar(n);

	if (n < 98)
	{
		_putchar(',');
		_putchar(' ');
		n++;
	}

	if (n > 98)
	{
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
