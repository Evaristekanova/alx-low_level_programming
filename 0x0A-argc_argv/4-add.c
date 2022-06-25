#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - display the name of program
 * @argc: argument counter
 * @argv:array of string
 * Return:0 if success
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i< argc; i++)
		{
			if (isdigit(argv[i]))
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
