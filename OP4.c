#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a = get_int("Enter a number: ");

    // Post-increment inside printf (after the comma)
    printf("After increment : %d\n", ++a);

    // Post-decrement inside printf (after the comma)
    printf("After decrement : %d\n", --a);

    return 0;
}
