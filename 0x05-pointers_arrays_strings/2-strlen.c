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

	for (i = 0; i >= 0; i++)
	{
		if (s[i] == '\0')
			break;
		else if (i == 0)
			counter = 0;
		else
			counter++;
	}
	return (counter);
}
