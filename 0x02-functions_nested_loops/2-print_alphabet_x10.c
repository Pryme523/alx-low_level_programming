#include "main.h"

/**
 * main - prints 10 times the alphabet, in lowercase, followed by a new line
 *
 * Return: 0 Always
 */

void print_alphabet_x10(void)
{

char ch;
int i;
i = 0;
while (i < 10)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}

_putchar('\n');
i++;
}
}
