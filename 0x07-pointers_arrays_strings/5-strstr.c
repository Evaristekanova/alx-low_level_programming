#include "main.h"
/**
 * _strstr - checking substruing in the string
 *
 * @haystack:arg1
 * @needle:arg2
 * Return:value
 */
char *_strstr(char *haystack, char *needle)
{
	char *str = haystack;
	char *word = needle;

	while (*str)
	{
		str = haystack;
		word = needle;
		while (*word)
		{
			if (*str == *word)
			{
				word++;
				str++;
			}
			else
				break;
		}
i		if (*word == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
