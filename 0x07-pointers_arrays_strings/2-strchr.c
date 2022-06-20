#include "main.h"
#include <stddef.h>
/**
 * _strchr - searching first occurrence of a letter in a string
 * and print string from that letters up to the of string
 *
 * @s:array
 * @c:character to check
 *
 * Return:value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (c == s[i])
		{
			return (s + i);
		}
	}
	if (c == s[i])
	{
		return (s + i);
	}
	return (NULL);
}
