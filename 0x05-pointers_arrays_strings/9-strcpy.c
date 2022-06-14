#include "main.h"
/**
 * _strcpy - copy str
 * @src: arg1
 * @dest: arg2
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	int counter = 0;

	for (i = 0; i >= 0; i++)
	{
		counter++;
		if (str[i] == '\0')
			break;
	}
	for (i = 0; i <counter; i++)
	{
		dest[i] = str[i];
	}
}
