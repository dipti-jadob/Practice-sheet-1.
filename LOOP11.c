#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter n: ");  // input n
    int count = 0;

    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0)
        {
            count++;  // increment count if divisible by 5
        }
    }

    printf("Count = %d\n", count);

    return 0;
}
