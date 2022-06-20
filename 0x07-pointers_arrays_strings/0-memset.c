#include "main.h"
/**
 * _memset - filling array with constant bytes
 *
 * @b:arg1
 * @n:arg2
 * @s:array
 * Return:value
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
