#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int year = get_int("Enter a year: ");

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("Leap year\n");
    else
        printf("Not a leap year\n");

    return 0;
}
