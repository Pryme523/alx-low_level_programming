#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - assign a random number to the variable n each time it is executed
* 
* Return: 0 Always
 */
int main(void)
{
	int n, remainder;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n < 0)
	{
		remainder = ((-1 * n) % 10) * -1;
	}	
	else 
	{
		remainder = n % 10;
	}
	if (remainder > 5)
	{
		printf("Last digit of int is %d and is greater than 5\n", remainder);
	}
	else if (remainder == 0)
	{
		printf("%d and is greater than 5\n", remainder);
	}
	else if (remainder < 6 && remainder != 0)
	{
		printf("Last digit of int is %d and is less than 6 and not 0\n", remainder);
	}

	return (0);
}
