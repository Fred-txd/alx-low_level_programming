#include <stdio.h>
/**
  *main - Entry point of the program
  *
  *Description: prints the sizes of various types
  *
  *Return: 0 (Success)
*/

int main(void)
{
	printf("Size of char: %i byte(s)\n", sizeof(char));
	printf("Size of int: %i byte(s)\n", sizeof(int));
	printf("Size of long: %i byte(s)\n", sizeof(long int));
	printf("Size of long: %i byte(s)\n", sizeof(long long));
	printf("Size of float: %i byte(s)\n", sizeof(float));
	return (0);
}
