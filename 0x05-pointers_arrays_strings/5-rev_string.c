#include "main.h"

/**
 * print_rev - reverse a string
 * @s: arg1
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		if (s[len] == '\0')
			break;
		_putchar(s[len]);
		len--;
	}
}
