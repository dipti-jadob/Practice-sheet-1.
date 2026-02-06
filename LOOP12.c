#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter n: ");
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum += 2 * i; // 2, 4, 6, ...
    }

    printf("Sum = %d\n", sum);
    return 0;
}
