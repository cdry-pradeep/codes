// // C proram to print following Pattern

/*

Pattern 11.

    1 2 3 4 3 2 1
    1 2 3   3 2 1
    1 2       2 1
    1           1

*/

// // Header Files
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// // Main Function Start
int main()
{
    int maxRows, maxCols;
    printf("\nHow Many Rows => ");
    scanf("%d", &maxRows);

    if (maxRows < 1)
    {
        printf("\n!!! Invalid Input,Plz Enter Positive Number....");
        exit(0);
    }
    maxCols = maxRows * 2 - 1;
    puts("\n--------------------------------------------\n");
    int spacesInCurrentRow;

    for (int row = 1; row <= maxRows; row++)
    {
        spacesInCurrentRow = (row - 1) * 2 - 1;

        for (int col = 1; col <= maxRows + 1 - row; col++)
            printf("%2d", col);

        for (int space = 1; space <= spacesInCurrentRow; space++)
            printf("  ");

        for (int col = row == 1 ? maxRows - 1 : maxRows + 1 - row; col; col--)
            printf("%2d", col);

        printf("\n");
    }
    printf("\n");
    getch();
    return 0;
}
