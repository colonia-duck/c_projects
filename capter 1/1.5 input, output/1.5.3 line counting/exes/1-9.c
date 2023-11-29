/*  write a program to cpoy its input to its output replacing every 1 or more space with one space*/

#include<stdio.h>

int main()
{
    int c, blanks;

    blanks = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
        {
            blanks = 0;
        }
        if (c == ' ')
        {
            ++blanks;
        }
        if(blanks > 1)
            ;
         
        else
        {
            putchar(c);
        }

    }
}