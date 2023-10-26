#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators - && (AND) checks if two conditions are true
    float temp;
    printf("Enter Temp: ");
    scanf("%f", &temp);
    int sunny;
    printf("Enter Sunny are not: ");
    scanf("%i", &sunny);

    if (temp >= 0 && temp <= 30 && sunny)
    {
        printf("The Weather is good!\n");
    }
    else
    {
        printf("The Weather is bad!\n");
    }
}