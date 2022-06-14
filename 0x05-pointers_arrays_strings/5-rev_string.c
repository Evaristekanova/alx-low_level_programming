#include "main.h"

/**
 * rev_string - reverse a string
 * @s: arg1
 * Return: void
 */
void rev_string(char *s)
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
