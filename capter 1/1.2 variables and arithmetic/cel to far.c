#include<stdio.h>

/* print  Fahrenheit-Celsius table
    for fahr  = 0, 20 ..., 300 */

int main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = -40 ;             /*lower bound of temp table*/
    upper = 300 ;       /*upper limit of the remp table */
    step = 10;              /*how much the temp table gose up by*/

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32)  / 9;

        printf("%3d\t%6d\n", fahr, celsius);

        fahr = fahr + step;
    }
}