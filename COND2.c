
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int marks = get_int("Enter marks: ");

    if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 70)
        printf("Grade: C\n");
    else
        printf("Fail\n");

    return 0;
}
