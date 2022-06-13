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

	counter = 0;
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
		{
			break;
		}
		counter++;
	}
	for (i >= counter - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
