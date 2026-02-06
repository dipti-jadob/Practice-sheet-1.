#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = 4; // Number of rows

    for (int i = 1; i <= n; i++)       // Outer loop: rows
    {
        for (int j = 1; j <= i; j++)   // Inner loop: stars in row
        {
            printf("*");
        }
        printf("\n");                  // Move to next row
    }

    return 0;
}
