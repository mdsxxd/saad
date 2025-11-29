#include <stdio.h>
int main() 
{
    int n, dig, sum = 0, rev;
    printf("Enter a number: ");
    scanf("%d", &n);

    rev = n;
    while (rev != 0)
     {
        dig = rev % 10;
        sum = sum * 10 + dig;
        rev /= 10;
    }

    if (n == sum)
        printf("%d is a palindrome number.\n", n);
    else
        printf("%d is not a palindrome number.\n", n);

    return 0;
}