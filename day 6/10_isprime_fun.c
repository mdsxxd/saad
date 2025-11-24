#include <stdio.h>
void fact(int num);
int main()
{
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact(num);
    fact(num);
    fact(num);
}
void fact(int num)
{
    int isprime = 1;
    if (num <= 1)
    {
        isprime = 0;
    }
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);
}