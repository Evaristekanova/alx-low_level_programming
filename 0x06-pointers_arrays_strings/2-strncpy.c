#include "main.h"
/**
 * _strncpy - copies strings
 *
 * @dest:arg1
 * @src:arg2
 * @n:arg3
 *
 * Return:void
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int counter = 0;

	for (i = 0; i < n; i++)
	{
		if (src[i] == '\0')
			break;
		counter++;
	}
	for (i = 0; i <= counter; i++)
	{
		dest[i] = src[i];
		_putchar(dest[i]);
	}
}
