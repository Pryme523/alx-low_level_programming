#include "main.h"

/**
 * main - prints 10* the numbers
 * from 0 to 14
 * followed by a newline
 */

void more_numbers(void)
{
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				_putchar(j + '0');
			}
		}
	_putchar('\n');
	}
}
