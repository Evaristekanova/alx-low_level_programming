#include "main.h"
/**
 * _puts - printing a string
 *
 * @str:array as parameter
 *
 * Return:void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i >= 0; i++)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		_putchar(*(str + i));
	}
	_putchar('\n');
}
