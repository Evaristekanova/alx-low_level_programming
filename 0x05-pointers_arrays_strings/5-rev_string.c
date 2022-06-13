#include "main.h"
/**
 *  rev_string - printing a string
 *
 * @s:array as parameter
 *
 * Return:void
 */
void rev_string(char *s)
{
	int i;
	int counter;

	for (i > 0; i >= 0; i--)
	{
		if (s[i] == '\0')
		{
			break;
		}
		_putchar(s[i]);
	}
}
