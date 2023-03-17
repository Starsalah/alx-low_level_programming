#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    time_t t;

    /* Intializes random number generator */
    time(&t);
    int seed = t % 10000; /* use the last four digits of the current time as seed */
    int a = 16807, m = 2147483647, q = 127773, r = 2836;
    int hi, lo;

    /* Generate a random number between -100 and 100 */
    hi = seed / q;
    lo = seed % q;
    seed = a * lo - r * hi;
    if (seed < 0) {
        seed += m;
    }
    n = seed % 201 - 100;

    /* Print the generated number and its sign */
    printf("%d is ", n);
    if (n > 0) {
        printf("positive\n");
    } else if (n == 0) {
        printf("zero\n");
    } else {
        printf("negative\n");
    }

    return 0;
}

