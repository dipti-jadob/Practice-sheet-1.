#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter n: ");  // input n
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += i;  // add i to sum
    }

    printf("Sum = %d\n", sum);  // print final sum

    return 0;
}
