#include <stdio.h>
int main()
 {
    int var = 50;
    int *ptr = &var;        // Pointer to int
    int **ptr_ptr = &ptr;   // Pointer to pointer to int

    printf("Value of var: %d\n", var);
    printf("Value of var using ptr: %d\n", *ptr);
    printf("Value of var using ptr_ptr: %d\n", **ptr_ptr);

    printf("Address of var: %p\n", (void*)&var);
    printf("Address stored in ptr (address of var): %p\n", (void*)ptr);
    printf("Address stored in ptr_ptr (address of ptr): %p\n", (void*)ptr_ptr);

    printf("Address of ptr: %p\n", (void*)&ptr);
    printf("Address of ptr_ptr: %p\n", (void*)&ptr_ptr);

    int a = 100;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    printf("Value of a using ptr2: %d\n", **ptr2);
    printf("Value of a using ptr3: %d\n", ***ptr3);
    printf("Value of a using ptr3: %d\n", *(*(*(&ptr3))));
    return 0;
 }
           





