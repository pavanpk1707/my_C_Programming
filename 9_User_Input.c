#include <stdio.h>

int main()
{
    char name[25];
    int age;
    printf("\nWhat's your name?: ");
    scanf("%s", name);

    printf("How old are you?: ");
    scanf("%d", &age);

    printf("\nHello %s, how are you?\n", name);
    printf("You are %d years old\n", age);

    return 0;
}