#include <stdio.h>
/* main function prints some strings*/
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

	printf("Size of a char:%lubyte(s)\n", (unsigned long) sizeof(char));
	printf("Size of an int:%lubyte(s)\n", (unsigned long) sizeof(int));
	printf("Size of a long int:%lubyte(s)\n", (unsigned long) sizeof(long int));
	printf("Size of a long long int:%lubyte(s)\n", (unsigned long)
			sizeof(long long int));
	printf("Size of a float:%lubyte(s)\n", (unsigned long) sizeof(float));
	return (0);
}
