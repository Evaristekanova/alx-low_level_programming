#include "main.h"
/**
 * _memset - filling array with constant bytes
 *
 * @b:arg1
 * @n:arg2
 * @s:array
 * Return:value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
