#include <stdio.h>
#include <math.h>

int main()
{
    double A = sqrt(9);
    int B = pow(2, 4);
    int C = round(3.49999);
    int D = ceil(3.01);
    int E = floor(3.9999);
    int F = fabs(-100);
    double G = log(3);
    double H = sin(45);
    double I = cos(45);
    double J = tan(45);

    printf("%1f\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    printf("%d\n", F);
    printf("%f\n", G);
    printf("%f\n", H);
    printf("%f\n", I);
    printf("%f\n", J);

    return 0;
}