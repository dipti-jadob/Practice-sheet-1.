#include <cs50.h>
#include <stdio.h>

int main(void)
{


    for (int i = 4; i >= 1; i--)        // outer loop
    {
        for (int j = 1; j <= i; j++)    // inner loop
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
