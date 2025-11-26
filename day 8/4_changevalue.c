#include<stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;  
    printf("Before changing \n");
    printf("Value of a: %d\n", a);  
    printf("Value of a using pointer ptr: %d\n", *ptr); 
    *ptr = 20;
    printf("After changing \n");
    printf("Value of a: %d\n", a);
    printf("Value of a using pointer ptr: %d\n", *ptr);
    return 0;
}