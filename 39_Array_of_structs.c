#include <stdio.h>
#include <string.h>

struct Student
{
    char name[12];
    float gpa;
};

int main()
{
    struct Student student1 = {"Spongebob", 3.6};
    struct Student student2 = {"Ram", 3.9};
    struct Student student3 = {"Pavan", 2.6};
    struct Student student4 = {"Sai", 3.8};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}