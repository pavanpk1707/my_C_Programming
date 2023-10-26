#include <stdio.h>
void hello(char name[], int age); // Function Prototype

int main()
{
    // Function prototype

    // Function declaration, w/o a body,before main()
    // Ensures that calls to a function are made with the correct arguments
    hello("PK", 22);
}

void hello(char name[], int age)
{
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}