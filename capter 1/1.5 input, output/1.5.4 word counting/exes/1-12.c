/*  write a program that prints it's input one word at a time   */

#include<stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            putchar('\n');
        }

        else
        {
            putchar(c);
        }
    }
    
}