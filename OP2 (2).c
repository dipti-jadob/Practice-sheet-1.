#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user to enter temperature in Celsius
    float c = get_float("Enter temperature in Celsius: ");

    // Convert to Fahrenheit
    float f = (c * 9 / 5) + 32;

    // Print result
    printf(" Fahrenheit= %.2f\n", f);

    return 0;
}
