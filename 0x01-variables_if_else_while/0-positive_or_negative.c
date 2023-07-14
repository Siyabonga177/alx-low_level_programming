#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*main determines in n is positive, zero or negative
*
*return 0 always (success)
*/

int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    printf("The number is %d\n", n);

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return 0;
}
