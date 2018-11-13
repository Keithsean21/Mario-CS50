/**
 * mario.c
 * Keith Foster <4eyeview@gmail.com>
 *
 * Creates half of the mario pyramid using # marks from user input.
 *
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    } while (n < 0 || n > 23);
    // this code accepts the "Height" from the user and states the value must be between 0 and 23
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n + 1; j++)
    // sets the conditions for the structure of the pyramid
    {
        if (i + j >= n - 1)
            printf("#");
            // prints the hash marks
        else
            printf(" ");
            // prints the spaces
    }
    printf("\n");
    // creates new lines for the printed hash marks
}
}
