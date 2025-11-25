#include<stdio.h>
int main()
{
    char name[50];
    printf("enter your name: ");
    fgets(name, 50 , stdin);
    printf("string is: %s\n", name);
    return 0;
}