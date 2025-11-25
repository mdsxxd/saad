#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter a number:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("array elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%dth value is = %d \n",i+1, arr[i]);
    }
}