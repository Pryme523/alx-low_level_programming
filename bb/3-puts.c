#include "main.h"
/**
 *  void _puts - prints a string to stdout
 *  @s: string to print
 */
 void _puts(char *str) 
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
