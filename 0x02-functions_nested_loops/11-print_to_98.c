#include "main.h"
/**
 * print_to_98-print nutural number within given range
 *
 * @n:parameter for the function
 * Return:void
 */
void print_to_98(int n)
{

	for (;n < 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}

	if (n > 98)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
