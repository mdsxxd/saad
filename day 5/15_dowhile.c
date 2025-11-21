#include<stdio.h>
int main()
{
    int i,n;
    printf("enter  a number \n");
    scanf("%d",&n);
    i=1;
    do 
    {
        printf("%d ",i);
        i++;
    }
      while (i<=n);
      return 0;
}