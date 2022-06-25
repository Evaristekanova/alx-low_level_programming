#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplying two numbrers
 * @argc:arg1
 * @argv:arg2
 *
 * Return:0 if success
 */
int main(int argc, char **argv)
{
	int i, mul;

	if (argc < 3)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d", mul);
	printf("\n");
	return (0);
}
