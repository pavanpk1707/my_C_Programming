#include <stdio.h>
#include <stdbool.h>

int main()
{
    char a = 'C';     // single character %c
    char b[] = "Bro"; // array of characters %s

    float c = 3.141689076678;    // 4 bytes (32 bits of precision) 6-7 digits %f
    double d = 3.14159265358973; // 8 bytes (64 bits) 15-16 digits %lf

    bool e = false; // 1 byte (true or false) %d

    char f = 97;           // 1 byte (-128 to +127) %d or %c
    unsigned char g = 255; // 1 byte (0 to +255) %d or %c

    short int h = 32767;          // 2 bytes (-32,768 to +32,767) %d
    unsigned short int i = 65535; // 2 bytes (0 to +65,535) %d

    int j = 2147483647;           // 4 bytes (-2,147,483,648 to 2,147,483,648)
    unsigned int k = 4294967295L; // 4 bytes (0 to +4,294,967,295) %u

    long long int l = 998786567890876568;           // 8 bytes (-9 quintillion to +9 quintillon) %lld
    unsigned long long int m = 1897900988789898878; // 8 bytes (18 quintillion) %llu

    printf("%c\n", a);   // char
    printf("%s\n", b);   // character array
    printf("%f\n", c);   // float
    printf("%lf\n", d);  // double
    printf("%d\n", e);   // bool
    printf("%c\n", f);   // char as numeric value
    printf("%d\n", g);   // unsigned char as numeric value
    printf("%d\n", h);   // short
    printf("%d\n", i);   // unsigned short
    printf("%d\n", j);   // int
    printf("%u\n", k);   // unsigned int
    printf("%lld\n", l); // long long int
    printf("%llu\n", m); // unsigned long long int

    return 0;
}