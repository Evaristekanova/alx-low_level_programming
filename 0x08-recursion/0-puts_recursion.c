#include "main.h"

/**
 * _puts_recursion - displaying a string
 *
 * @s:arg of function
 *
 * Return:void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
