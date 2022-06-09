#include "main.h"
/**
 * _isupper-checking if letter is capital
 *
 * @c:parameter
 * Return:0 if success
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
