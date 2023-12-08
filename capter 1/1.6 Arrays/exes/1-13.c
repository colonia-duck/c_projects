/* exersise 1-13, to write a programe that print a historgram with horizontal bars*/

#include<stdio.h>

#define MAXHIST 15
#define MAXWORD 11
#define IN 1
#define OUT 0

int main()
{
    int c, i, numchar, state;
    int len;
    int maxvalue;
    int overflow;
    int wl[MAXWORD];

    state = OUT;
    numchar = 0;
    overflow = 0;

    for (i = 0; i < MAXWORD; ++i)
    {
        wl[i] = 0;
    }
    while ((c = getchar()) != EOF)
    {
        if ( c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
            if (numchar > 0)
            {
                if (numchar < MAXWORD)
                {
                    ++wl[numchar];
                }
                else 
                {
                    ++overflow;
                }
            }
            numchar = 0;
        }
        else if (state == OUT)
        {
            state = IN;
            numchar = 1;
        }
        else 
        {
            ++numchar;
        }
    }
    maxvalue = 0;

    for (i = 1; i < MAXWORD; ++i)
    {
        if (wl[i] > maxvalue)
        {
            maxvalue = wl[i];
        }
    }
    for (i = 1; i < MAXWORD; ++i)
    {
        printf ("%5d - %5d : ", i, wl[i]);
        if (wl[i] > 0)
        {
            if ((len = wl[i] * MAXHIST / maxvalue) <= 0)
            {
                len = 1;
            }
        }
        else {
            len = 0;
        }
        while (len > 0)
        {
            putchar('|');
            --len;
        }
        putchar('\n');
        
    }
    if (overflow > 0)
    {
        printf ("There are %d words >=  %d\n", overflow, MAXWORD);
    }
}
