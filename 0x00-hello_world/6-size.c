#include <stdio.h>
/**
 * main - print where we begin
 * Return:  return zero to declare sucess
 */
int main(void)
{
	char m;
	int  n;
	long int x;
	long long int z;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int: %lu byte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)
			sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
