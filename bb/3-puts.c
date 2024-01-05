#include "main.h"
/**
 *  void _puts - prints a string to stdout
 *  @s: string to print
 */
 void _puts(char *str) 
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
		putchar('\n');
}
