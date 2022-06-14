#include "main.h"
/**
 * puts_half - printingthe last half elements of array
 *
 *  @str: array arg
 *
 *  Return:void
 */
void puts_half(char *str)
{
	int i;
	int n;
	int lenght = 0;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		lenght++;
	}
	if (lenght % 2 != 0)
	{
		n = (lenght - 1) / 2;
	}
	else
	{
		n = lenght / 2;
	}
	for (i = n; i <= lenght - 1; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}
