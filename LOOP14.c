#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n = get_int("Enter a number: ");
    int count = 0;
    int temp = n;

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        while (temp != 0)
        {
            count++;
            temp /= 10;
        }
    }

    printf("Number of digits = %d\n", count);
    return 0;
}
