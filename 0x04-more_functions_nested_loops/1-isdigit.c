#include "main.h"
/**
 * _isdigit-printing numbers
 *
 * @c:parameter of the function
 * Return:value
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
