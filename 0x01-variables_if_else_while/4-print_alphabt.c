#include <stdio.h>

/**
 *  main - print the alphabet in lowercase followed by a new line
 *
 *  Return: 0 Always
 */

int main(void)
{
        char chr;

        for (chr = 97; chr <= 122; chr++)
       {
        if (chr != 101 && chr != 113)
        {
                putchar(chr);
        }
       }
        putchar('\n');

        return (0);
}                                             
