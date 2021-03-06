#include "main.h"
/**
 * _strncat - concatenates two strings
 * @n:size of array
 * @dest: pointer destination
 * @src: pointer source
 * Return: void
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int a;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[i + a] = src[a];
	}
	dest[i + a] = '\0';
	return (dest);
}
