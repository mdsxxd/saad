#include<stdio.h>
int main()
{
    int i;
    printf("multiples of 5 are \n");
    for (i=1; i<=100; i++)
     if (i%5==0)
     {
        printf("%d ",i);
     }
}