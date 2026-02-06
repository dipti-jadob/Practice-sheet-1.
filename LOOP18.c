#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int num = 1;

    for (int i = 1; i <= 4; i++)          // rows
    {
        for (int j = 1; j <= i; j++)      // columns
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
