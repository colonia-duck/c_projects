#include<stdio.h>

/* to print the Fahrenheit to Celsius table but the other way arounds */

main(){
    float Celsius, fhar;
    int upper, lower, step;

    lower = 0;
    upper = 300;
    step = 20;

    fhar = lower;

    printf("%s %s\n", "Celsius", "Fahrenheit");
    
    while (fhar <= upper)
    {
        Celsius = (5.0/9.0) * (fhar-32) ;
        printf("%6.1f %7.0f\n", Celsius, fhar );
        fhar = fhar + step;
    }
    
}