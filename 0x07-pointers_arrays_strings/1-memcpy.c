#include "main.h"
/**
 * _memcpy - filling array with constant bytes
 *
 * @dest:array1
 * @n:arg2
 * @src:array2
 * Return:value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
