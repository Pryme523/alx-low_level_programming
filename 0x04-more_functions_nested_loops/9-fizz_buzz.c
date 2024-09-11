#include <stdio.h>

/**
 * main - prints the numbers 
 * from 1 - 100 followed by 
 * a newline
 *
 * 	For each multiple of 3, 
 * 	fizz is printed 
 * 	and Bizz is printed for all 
 * 	multiples of 5
 * 	and FizzBuzz is printed for all
 * 	multiples of 5 and 3
 *
 */

int main(void)
{
	int i = 1;
	
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
                 {
              	          printf("FizzBuzz ");
		 }

		else if ((i % 3) == 0)
        	 {
               	        printf("Fizz ");
            	 }
                else if ((i % 5) == 0)
		{
                       	printf("Buzz ");
		}
		  
		else
		{
			printf("%d ", i);
		}
	}	
	return (0);
}
