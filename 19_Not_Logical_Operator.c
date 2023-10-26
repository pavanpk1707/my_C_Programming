#include <stdio.h>
#include <stdbool.h>

int main()
{
    // logical operators = ! (NOT) reverse the state of a condition

    bool sunny = true;

    if (!sunny)
    {
        printf("It's cloudy outside\n");
    }
    else
    {
        printf("It's sunny outside\n");
    }
}