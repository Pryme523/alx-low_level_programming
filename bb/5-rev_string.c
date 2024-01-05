#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: strinf to be printed
 *
 * Return: 0 Always
 */

void print_rev(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
