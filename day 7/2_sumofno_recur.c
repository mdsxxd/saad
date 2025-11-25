#include<stdio.h>
int sumofn(int n);
int main()
{
    int num = 0;
    printf("enter a value:");
    scanf("%d", &num);
    int result = sumofn(num);
    printf("Sum of first %d natural numbers is: %d\n", num, result);
    return 0;
}
int sumofn(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumofn(n - 1);
} 