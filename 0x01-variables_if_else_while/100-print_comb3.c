#include <stdio.h>

/**
 *  main - prints all possible different combinations of two digits
 *
 *  Return: 0 Always
 */
int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
