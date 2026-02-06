#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter n: ");  // input n

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i * 3);  // print the ith multiple of 3
    }

    return 0;
}
