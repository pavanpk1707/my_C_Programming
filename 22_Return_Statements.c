#include <stdio.h>

double square(double x)
{
    double result = x * x;
    return result;
}

int main()
{
    double x = square(6);
    printf("%.2lf\n", x);

    return 0;

    // return = returns a value back to a calling function
}