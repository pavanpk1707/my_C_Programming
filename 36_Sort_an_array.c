#include <stdio.h>

void sort(char array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(char array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
}

int main()
{
    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    char array1[] = {'A', 'B', 'F', 'E', 'C', 'D'};
    int size = sizeof(array1) / sizeof(array1[0]);
    sort(array1, size);
    printArray(array1, size);
}