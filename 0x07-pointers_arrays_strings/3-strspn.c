#include "main.h"
int checkForChar(char c, char *accept);
/**
 * int _strspn - string to chech if the character exist
 *
 * @s:string
 * @accept:word
 * Return:value
 */
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, length = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (checkForChar(s[i], accept))
                {
                        length++;
                }
                else
                        break;
        }
        return (length);
}
/**
 * checkForChar-cheching if letter is in the string accept
 * @c:character to check
 * @accept:word to check
 * Return:value
 */
int checkForChar(char c, char *accept)
{
	int i;
	
	for (i = 0; accept[i] != '\0'; i++)
	{
		if (c == accept[i])
		{
			return (1);
		}
	}
	if (c == accept[i])
		return (1);
			return (0);
}
