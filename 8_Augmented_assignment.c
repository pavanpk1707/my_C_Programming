#include <stdio.h>

int main()
{
    /*
    Augmented Assignment operators = used to replace a statement where an
    operator takes a variable as one of its arguments and then assigns
    the result back to the same variable
    x = x+1
    x += 1
    */

    int x = 10;
    printf("%d\n", x);
    // x = x + 2;
    x += 2;
    printf("%d\n", x);
    // x = x - 3;
    x -= 3;
    printf("%d\n", x);
    // x = x * 4;
    x *= 4;
    printf("%d\n", x);
    // x = x / 2;
    x /= 2;
    printf("%d\n", x);
    x += 3;
    // x = x % 2
    x %= 2;
    printf("%d\n", x);
}