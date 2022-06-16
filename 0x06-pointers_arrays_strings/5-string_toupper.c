#include "main.h"
/**
 * string_toupper - uppercase
 *@s:para1
 * Return:value
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
		_putchar(s[i]);
	}
}

