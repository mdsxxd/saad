#include    <stdio.h>
int main ()
{
    int a,b;
    printf("Enter value of a and b \n");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a=%d b=%d\n",a,b);
    int *p1=&a; 
    int *p2=&b;
    int temp;   
    temp=*p1;  
    *p1=*p2;
    *p2=temp;
    printf("After swapping: a=%d b=%d\n",a,b);
}