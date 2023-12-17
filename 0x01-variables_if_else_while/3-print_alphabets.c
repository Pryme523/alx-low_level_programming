#include <stdio.h>

/**
 *  main - prints the alphabet in lowercase, and then in uppercase
 *
 *  Return: 0 Always
 */

int main(void)
{
	char chr;

	for (chr = 97; chr <= 122; chr++)
	{
		putchar(chr);
	}
	for (chr = 65; chr <= 90; chr++)
	{
		putchar(chr);
	}
	putchar('\n');

	return (0);
}

