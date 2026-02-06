#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");  // prompt matches your requirement
    int fact = 1;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;  // multiply fact by i
    }

    printf("Factorial = %d\n", fact);  // print factorial

    return 0;
}

