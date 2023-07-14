#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints the alphabet in lowercase,
 * excluding the letters 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;

    for (letter = 'a'; letter <= 'z'; letter++)
    {
        if (letter != 'q' && letter != 'e')
        {
            putchar(letter);
        }
    }

    putchar('\n');

    return 0;
}
