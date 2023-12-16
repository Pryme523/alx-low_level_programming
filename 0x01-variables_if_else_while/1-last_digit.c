#include <stdlib.h>
#include <time.h>
include <stdio.h>

/**assign a random number to the variable n each time it is executed
*
*Return 0 Always
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
