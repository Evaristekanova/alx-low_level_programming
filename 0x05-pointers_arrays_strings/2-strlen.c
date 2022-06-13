#include "main.h"
/**
 * _strlen - counting the number of string characters
 *
 * @s:arg
 *
 * Return:0 if success
 */
int _strlen(char *s)
{
	int counter;
	int i;

	counter = 0;
	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		else
			counter++;
	}
	return (counter);
}
