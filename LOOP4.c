#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter n: ");

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
