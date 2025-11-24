#include <stdio.h>
void add();
int sub();
int main() 
{
    printf("main function \n");
    add();
    int result = sub();
    printf("The subtraction is: %d\n", result);
}
void add()
{
    printf("The addition is: %d\n", 10 + 10);
}
int sub()
{
    return 20 - 10;
}