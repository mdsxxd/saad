#include <stdio.h>

int main(void)
{
    int marks[2][2]; /* 2 rows, 2 columns */

    marks[0][0] = 85;
    marks[0][1] = 90;
    marks[1][0] = 95;
    marks[1][1] = 100;

    printf("Marks 1: %d\n", marks[0][0]);
    printf("Marks 2: %d\n", marks[0][1]);
    printf("Marks 3: %d\n", marks[1][0]);
    printf("Marks 4: %d\n", marks[1][1]);

    size_t total_bytes = sizeof marks;
    size_t rows = sizeof marks / sizeof marks[0];
    size_t cols = sizeof marks[0] / sizeof marks[0][0];
    size_t total_elements = rows * cols;

    printf("Size of marks array: %zu bytes\n", total_bytes);
    printf("Rows: %zu, Columns: %zu, Total elements: %zu\n", rows, cols, total_elements);

    return 0;
}
