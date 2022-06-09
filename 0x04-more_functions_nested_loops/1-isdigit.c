#include "main.h"
/**
 * _isdigit-cheching if letter is digit
 *
 * @c:parameter for the function
 * Return:0 if success
 */
int _isdigit(int c)
{
	if (c <= 48 && c >= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
