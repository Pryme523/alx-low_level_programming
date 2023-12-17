#include <stdio.h>

/**
 *  main - prints the alphabet in lower case
 *
 *  Return 0 Always
 */
int main (void)
{
	char chr;

	for (chr = "a"; chr <= "z"; chr++)
	{
		putchar(chr);
	}
	putchar ('\n');

	return (0);
}
