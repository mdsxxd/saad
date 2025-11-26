#include<stdio.h>
int main() {
    int a = 10;   
    int *ptr = &a;    
    printf("Value of a: %d\n", *ptr); 
    printf("Address of a: %p\n", &a);
    printf("value of ptr (address of a): %p\n", ptr);
    printf("Address of pointer ptr: %p\n", &ptr);
    return 0;
}