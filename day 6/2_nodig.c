#include<stdio.h>
int main() 
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num); 
    int count = 0;
while (num!=0)

{
    int digit = num % 10;
    count++;
    num = num / 10;
}
    printf("The number of digits is: %d\n", count);
    return 0;
}
