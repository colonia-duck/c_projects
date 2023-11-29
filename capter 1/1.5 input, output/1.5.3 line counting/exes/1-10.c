/* write a program to copy its input to its output, replacing each tab with \t,
     each backspace with \b and each backspace with \\*/

#include<stdio.h>

int main()
{
    int c;

    while((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
            while((c = getchar()) == '\t')
            {
                printf("\\t");
            } 
        }
        if (c == '\\')
        {
            printf("\\\\");
            while((c = getchar()) == '\\')
            {
                printf("\\\\");
            }

        }
        if (c == '\b')
        {
            printf("\\b");
            while((c = getchar()) == '\b')
            {
                printf("\\b");
            }
        }
    }
}