#include <stdio.h>
#include "main.h"
/**
 * main - writes the character c to stdout
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:0 if success
 * On error, -1 is returned, and errno is set appropriately
 */
int main(int argc, char **argv)
{
	argv = argv;
	printf("%d\n", (argc - 1));
	return (0);
}
