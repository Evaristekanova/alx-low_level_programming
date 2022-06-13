#include "main.h"
/**
 * swap_int - swapping two numbers
 *
 * @a:arg1
 * @b:arg2
 *
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}
