#include <stdio.h>
/**
  *main - Entry point of the program
  *
  *Description: writing a string without using printf or puts functions
  *
  *Return: 1
*/

int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
