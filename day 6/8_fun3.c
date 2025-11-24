#include <stdio.h>
void add();
int main() 
{
    printf("main function \n");
    add();
    add();
    add();
}
void add()
{
    
    printf("The addition is: %d\n", 10 + 10);
}