#include<stdio.h>
int main()
{
    int a = 5;
    int *ptr = &a;
    printf("Value of a: %d\n", a);
    printf("Value of a: %d\n", *ptr);
    printf("Value of a: %d\n", *(&a));
    printf("Value of a: %d\n", *(*(&ptr)));
    printf("Value of a: %d\n", *(&(*(&a))));

    printf("Value of ptr: %p\n", ptr);
    printf("Value of ptr: %p\n", &a);
    printf("Value of ptr: %p\n", *(&ptr));
    printf("Value of ptr: %p\n", (&(*(&a))));
    return 0;



}