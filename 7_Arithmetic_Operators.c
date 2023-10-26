#include <stdio.h>

int main()
{
    // arithmetic operators

    // + (addition)
    // - (subtraction)
    // * (multiplication)
    // / (division)
    // % (modulus)
    // ++ increment
    // -- decrement

    int x = 7;
    int y = 2;
    printf("Addition of %d and %d is %d\n", x, y, (x + y));
    printf("Subtraction of %d and %d is %d\n", x, y, (x - y));
    printf("Multiplication of %d and %d is %d\n", x, y, (x * y));
    printf("Division of %d and %d is %.2f\n", x, y, (x / (float)(y)));
    printf("Modulo of %d and %d is %d\n", x, y, (x % y));
    x++;
    printf("After Incremention %d\n", x);
    y--;
    printf("After Decremention %d\n", y);
}