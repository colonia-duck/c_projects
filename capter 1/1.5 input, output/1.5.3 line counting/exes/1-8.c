/*  write a programe that counts the number of blank spaces, tabs and newlines */

#include<stdio.h>

int main()
{
    int c, ta, nl, bl;

    nl = 0;
    ta = 0;
    bl = 0;

    while ((c = getchar()) != EOF)
    {
        if ( c == '\n')
        {
            ++nl;
        }
        
        if (c == ' ')
        {
            ++bl;
        }

        if (c == '\t')
        {
            ++ta;
        }

    }

    printf("%s %d %s %d %s %d\n", "newlines:", nl, "blank spaces:", bl, "tabs:", ta);
    
}