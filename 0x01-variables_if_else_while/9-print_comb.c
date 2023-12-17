#include <stdio.h>

/**
 *  main - prints all possble combinations of single-digit numbers
 *
 *  Return: 0 Always
 */
int main(void)
{
	int i;
	char separator_1 = "";
	char separator_2 = "";

	for (i =0; i < 10, i++)
	{
		putchar(*separator_1);
		putchar(*separator_2);
		putchar(i + 48);
		separator_1 = ","
		separator_2 = " "
	}
	putchar('\n');
	return (0);
}
