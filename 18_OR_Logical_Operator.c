#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = || (OR) checks if at least one condition is true
    float temp;
    printf("Enter Temp: ");
    scanf("%f", &temp);
    int too_sunny;
    printf("Enter Sunny are not: ");
    scanf("%i", &too_sunny);

    if (temp <= 0 || temp >= 40 || too_sunny)
    {
        printf("The Weather is bad!\n");
    }
    else
    {
        printf("The Weather is Good!\n");
    }
}