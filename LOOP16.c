
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 4;

    for (int i = 1; i <= n; i++)        // outer loop
    {
        for (int j = 1; j <= i; j++)    // inner loop
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
