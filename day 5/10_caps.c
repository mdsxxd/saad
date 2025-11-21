#include<stdio.h>
int main()
{
    char c;
    printf("enter a character \n");
    scanf("%c",&c);
    if(c>=65 && c<=90)
    printf("it is capital");
    else 
    printf("it is small");
    return 0;
}