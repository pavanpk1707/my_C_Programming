#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Pseudo random numbers - A set of values or elements that are statistically random
    srand(time(0));

    int number1 = (rand() % 6 + 1);

    printf("%d", number1);
}
