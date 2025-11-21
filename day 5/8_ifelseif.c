#include<stdio.h>
int main()
{
    int m;
    printf("enter the marks \n");
    scanf("%d",m);
    if (m>=90&&m<=100)
    printf("grade A");
    else if (m>=75&&m<=89)
    printf("grade B");
    else if (m>=50&&m<=74)
    printf("grade C");
    else if (m>=35&&m<=49)
    printf("grade D");
    else 
    printf("FAIL");
    return 0;
}