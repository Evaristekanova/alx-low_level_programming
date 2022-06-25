#include <stdio.h>

/**
 * main - displaying every argument of program
 * @argc: argument counter
 * @argv:array of string
 * Return:0 if success
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == argc - 1)
			printf("%s", argv[i]);
		else
			printf("%s\n", argv[i]);
	}
}
