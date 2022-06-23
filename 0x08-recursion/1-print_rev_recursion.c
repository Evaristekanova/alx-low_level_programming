#include "main.h"

/**
 * _print_rev_recursion - displaying string in reverse mode
 *
 * @s:argument stand for string to be passed
 *
 * Return:no value
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
