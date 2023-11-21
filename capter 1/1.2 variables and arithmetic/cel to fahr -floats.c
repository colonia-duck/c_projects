#include<stdio.h>

/* to print the fahr to cel table as shown in "cel to fahr.c" 
but with more accuracy with floats */

main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%s %s\n", "Fahrenheit", "Celsius");
    
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%6.0f %9.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}