#include <stdio.h>

int main()
{
    /* Variable = Allocated space in memory to store a value.
    We refer to a variable's name to access the stored value.
    That variable now behaves as if it was the value it contains
    But we need to declare what type of data we are storing.
    */
    int x;               // declaration
    x = 4;               // initalization
    int y = 1;           // declaration + initalization
    int age = 22;        // Integer
    float height = 5.8;  // Decimal
    char Grade = 'A';    // Single character
    char name[] = "Bro"; // array of characters

    printf("You are %i years old\n", age);
    printf("Your Height is %f\n", height);
    printf("Your Grade is %c\n", Grade);
    printf("Your Nickname is %s\n", name);
    return 0;
}