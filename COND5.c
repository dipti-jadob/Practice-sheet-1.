#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int age = get_int("Enter age: ");
    int student = get_int("Enter student status (1 = yes, 0 = no): ");

    if (age < 12)
        printf("Ticket price = 50\n");
    else if (age <= 60)
    {
        if (student == 1)
            printf("Ticket price = 80\n");
        else
            printf("Ticket price = 100\n");
    }
    else
        printf("Ticket price = 60\n");

    return 0;
}
