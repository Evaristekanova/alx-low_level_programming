#include "main.h"
/**
 * reverse_array - reverseing array
 *
 * @a:arg1
 * @n:arg2
 *
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i;
	int count = 0;

	for (i = 0; i < n; i++)
	{
		count++
	}
	for (count = n - 1; count >= 0; count--)
	{
		if (count != 0)
		{
			_putchar(a[count]);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[count]);
		}
	}
}
