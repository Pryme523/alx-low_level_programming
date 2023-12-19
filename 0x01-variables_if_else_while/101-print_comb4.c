#include <stdio.h>

/**
 *  main - prints all possible different combinations of two digits
 *
 *  Return: 0 Always
 */
int main(void)
{
	int i, j, k;
	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			putchar(i + 48);
			putchar(j + 48);
			putchar(k + 48);
			if (i != 7 || j != 8 || k! = 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
