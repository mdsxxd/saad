#include <stdio.h>
int add(int a, int b);
int sub(int a, int b);
int main(void)
{

    int result1 = add(50, 20);
    int result2 = add(80, 50);
    int result3 = add(50, 50);

    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);
    printf("Result3: %d\n", result3);

    int result1 = sub(50, 20);
    int result2 = sub(80, 50);
    int result3 = sub(70, 50);

    printf("Result1: %d\n", result1);
    printf("Result2: %d\n", result2);
    printf("Result3: %d\n", result3);

    return 0;
}
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
