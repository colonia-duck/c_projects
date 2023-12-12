#include <stdio.h>
#include <locale.h>

int power(int number, int exponent)
{
    int p, i;

    p = 1;
    for (i = 1; i <= exponent; ++i)
    {
        p = p * number;
    }
    return p;
}

int main()
{
    // Set the locale to the user's default
    setlocale(LC_NUMERIC, "");

    int i;

    for (i = 1; i < 10; ++i)
    {
        printf("i = %2d, calc-1 = %'4d, calc-2 = %'7d\n", i, power(2, i), power(-3, i));
    }

    return 0;
}