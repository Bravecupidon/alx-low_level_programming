#include <stdio.h>
/**
 * main - Entry point
 * Return : always 0
 */
int main(void)
{

	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("size of an int: %ld byte\n", sizeof(int));
	printf("size of a long int: %ld byte\n", sizeof(long int));
	printf("size of a long long int: %ld byte\n", sizeof(long long int));
	printf("size of a float: %ld byte\n", sizeof(float));
	return (0);

}
