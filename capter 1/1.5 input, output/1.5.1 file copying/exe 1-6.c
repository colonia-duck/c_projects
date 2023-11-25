#include<stdio.h>

/* verify that `getchar() != EOF ` is 0 or 1*/

main()
{
    printf("%d", getchar() != EOF);
}