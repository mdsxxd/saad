#include<stdio.h>
int main()
{
    int min=0, arr[5];
    printf("enter numbers:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    min = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("minimum number is = %d\n", min);
    return 0;   
}