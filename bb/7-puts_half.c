#include "main.h"
/**
 * puts_half - prints half of a string
 * if odd len, n = (length of the string - 1) / 2
 * @s: string input
 * Returns: half of the input
 */

void puts_half(char *str)
{
	int a, n, longi;
	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
