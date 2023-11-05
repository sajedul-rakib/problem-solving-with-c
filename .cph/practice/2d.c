#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int numbers[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &numbers[i][j]);
        }
    }

    for (int i = 0; i < row; i++)
    {
        printf("|");
        for (int j = 0; j < col; j++)
        {
            printf("%d ", numbers[i][j]);
        }
        printf("|");
        printf("\n");
    }

    return 0;
}