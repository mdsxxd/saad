#include <stdio.h>

int main(void)
{
    const int ROWS = 3;
    const int COLS = 3;
    int arr[ROWS][COLS];

    printf("Enter %d numbers:\n", ROWS * COLS);
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            scanf("%d", &arr[i][j]);

    printf("Even elements:\n");
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLS; j++) 
        {
            if (arr[i][j] % 2 == 0) 
            {
                printf("row %d, col %d = %d\n", i + 1, j + 1, arr[i][j]);
            }
        }
    }

    return 0;
}