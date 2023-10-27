#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};
int main()
{
    // enum = a user defined type of named integer identifiers
    // helps to make a program more readable
    enum Day today = Mon;
    printf("%d\n", today);

    if (today == Sun || today == Sat)
    {
        printf("It's the weeked! Party time\n");
    }
    else
    {
        printf("I had to work\n");
    }
    return 0;
}