#include <stdio.h>

/* print the fhar to cel table with a for loop*/

main()
 {
    int fhar;

    for (fhar = 0; fhar <= 300; fhar = fhar + 20)
        printf("%3d %6.1f\n", fhar, (5.0/9.0)*(fhar-32));
}
