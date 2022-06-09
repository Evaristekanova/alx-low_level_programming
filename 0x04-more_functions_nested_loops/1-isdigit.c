#include "main.h"
/**
 * _isdigit-printing numbers
 *
 * @c:parameter of the function
 * Return:value
 */
int _isdigit(int c)
{
	if (c <= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
