#include "main.h"
/**
 * print_alphabet_x10-printing letters 10 times
 *
 * Return:void
 */
void print_alphabet_x10(void)
{
	char lett;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (lett = 'a'; lett <= 'z'; lett++)
		{
			_putchar(lett);
		}
		_putchar('\n');
	}
}
