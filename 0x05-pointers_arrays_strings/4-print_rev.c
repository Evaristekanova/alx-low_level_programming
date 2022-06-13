#include "main.h"
/**
 * print_rev - printing a string
 *
 * @s:array as parameter
 *
 * Return:void
 */
void print_rev(char *s)
{
	int i;
	int n;

	for (i = 0; i >= n; i--)
	{
		if (s[i] == '\0')
		{
			break;
		}
		_putchar(s[i]);
	}
	_putchar('\n');
}
