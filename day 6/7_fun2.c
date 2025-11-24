#include    <stdio.h>
void add(int a, int b);
int main() 
{
add(5, 10);
add(7, 3);
}
void add(int a, int b)
{
    printf("The addition is: %d\n", a + b);
}
