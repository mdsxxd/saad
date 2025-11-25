#include<stdio.h>
int main()
{
    int arr[5];
    printf("enter numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("array elements = \n");
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d  value is = %d \n", i + 1, arr[i]);
        }
    }

    return 0;
}