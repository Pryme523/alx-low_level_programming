#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two intergers
 */

int mul(int a, int b)
{
	int product = a * b;

	putchar(product + '0');
	return (product);
}
