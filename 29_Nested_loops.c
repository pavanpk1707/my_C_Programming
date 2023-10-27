#include <stdio.h>

int main()
{
    // nested loop = a loop inside of another loop

    int rows;
    int columns;
    char symbol;

    printf("Enter # of rows: ");
    scanf("%d", &rows);

    printf("Enter # of columns: ");
    scanf("%d", &columns);
    scanf("%c");

    printf("Enter a Symbol to use: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; i <= columns; i++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}