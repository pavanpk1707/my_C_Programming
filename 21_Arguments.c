#include <stdio.h>

void birthday(char x[], int y) // parameters
{
    printf("\nHappy birthday dear %s!", x);
    printf("\nYou are %d years old!\n", y);
}

int main()
{
    char name[] = "PK";
    int age = 22;
    birthday(name, age); // arguments

    return 0;
}