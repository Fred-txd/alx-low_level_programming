#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: character to check
 *
 * Return: 0 (Success)
 */
void puts2(char *str)
{
	int string;

	for (string = 0; str[string] != '\0'; string++)
	if (string % 2 == 0)
		putchar(str[string]);
	putchar('\n');
}
