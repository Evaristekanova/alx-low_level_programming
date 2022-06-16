#include "main.h"
/**
 * cap_string - capitalizing all words of a string
 *
 * @s:para1
 * Return:void
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				_putchar(s[i]);
			}
		}
		else if (s[i] == ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
				_putchar(s[i]);
			}
		}
		else
		{
			_putchar(s[i]);
		}
	}
}
