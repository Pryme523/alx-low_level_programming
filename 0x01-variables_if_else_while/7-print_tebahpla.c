#include <stdio.h>

/**
 *  main - prints all single digit numbers of base 10 starting from 0
 *
 *  Return: 0 Always
 */
int main(void)
{
	char i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
