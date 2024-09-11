#include "main.h"

/**
 * main - draws a straight line
 * in the terminal
 *
 */

void print_line(int n)
{
	char m = '_';
	
	for (; n <= 20; n++)
	{
		_putchar(m);

		if (n <= 0)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');

}
