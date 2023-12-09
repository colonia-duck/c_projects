/* write a program to print a historgram of the frequences of different charactors in the input */

#include<stdio.h>
#include<ctype.h>

#define MAXHIST 15
#define MAXCHAR 128 

int main()
{
    int character, i;
    int length;
    int maxvalue;
    int characterCounters[MAXCHAR];

    // sets the characterCounters array to 1 and the element to 0
    for (i = 0; i < MAXCHAR; ++i)
    {
        characterCounters[i] = 0;
    }

    while ((character = getchar()) != EOF)
    {
        //if the input is less then MAXCHAR then incrament characterCounters array by character + 1 at the 
        if (character < MAXCHAR)
        {
            ++characterCounters[character];
        }
    }
    maxvalue = 0;
    // setse i to 1, checks if i is less then MAXCHAR, then incraments i by 1
    for (i = 1; i < MAXCHAR; ++i)
    {
        // if characterCounters at [i] is greater then maxvalue then set maxvalue to characterCounters[i]
        if (characterCounters[i] > maxvalue)
        {
            maxvalue = characterCounters[i];
        }
    }    
    for (i = 1; i < MAXCHAR; ++i)
    {
        /* translates ASCII charactors into the letter/number/symble to it's it's int reprsontation and vice versa
             (e.g. turns 'a' => 65) */
        if (isprint(i))
        {
            printf("%5d - %c - %5d : ", i, i, characterCounters[i]);
        }
        else
        {
            printf("%5d - - %5d : ", i, characterCounters[i]);
        }
        if (characterCounters[i] > 0) 
        {
            if ((length = characterCounters[i] * MAXHIST / maxvalue) <= 0)
            {
                length = 1;
            }
        }
        else
        {
            length = 0;
        }
        while (length > 0)
        {
            putchar('|');
            --length;
        }
        putchar('\n');
    }
    

    return 0;
}