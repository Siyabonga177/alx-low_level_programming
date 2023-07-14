#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/** *main - prints the last digit of a random number and tell id that number is greater than five, less than six or zero
*
*always return 0 (success)
*/

int main(void)
{
    int n;

    srand(time(0));
    n = rand();

    printf("Last digit of %d is ", n);

    int lastDigit = n % 10;

    if (lastDigit > 5)
    {
        printf("%d and is greater than 5\n", lastDigit);
    }
    else if (lastDigit == 0)
    {
        printf("%d and is 0\n", lastDigit);
    }
    else
    {
        printf("%d and is less than 6 and not 0\n", lastDigit);
    }

    return 0;
}
