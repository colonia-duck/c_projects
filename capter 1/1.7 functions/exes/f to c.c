// exercise 1-15
/* write a programe that converts fahrenhtight te celces 
    using functions */

#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float convert(float fahr)
{
    float celces;

    celces = (5.0 / 9.0) * (fahr - 32);

    return celces;
}

int main()
{
    float fhar, celces;
    fhar = LOWER;

    printf("%s %s\n", "Fahrenheit", "Celces");

    while (fhar <= UPPER)
    {
        celces = convert(fhar);
        printf("%6.0f %9.1f\n",fhar, celces );
        fhar = fhar + STEP;
    }
    
}