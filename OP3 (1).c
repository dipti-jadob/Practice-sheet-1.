#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to enter an integer
    int n = get_int("Enter a number: ");

    // Check even or odd using modulo operator
    if (n% 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd\n");
    }

    return 0;
}
