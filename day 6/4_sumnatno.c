#include<stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a natural number: ");
    scanf("%d", &n);
    // sum = (n * (n + 1)) / 2; --- Alternative formula for the sum of first n natural numbers
    i = 1;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    return 0;
}