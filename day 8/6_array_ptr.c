#include<stdio.h>
int main ()
{
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = &(arr[0]);
    printf("value of ptr %p\n",ptr); 
    printf("value of ptr using arr[0] %p\n",&(arr[0]));
    printf("value of arr[0] %d\n",arr[0]);
    printf("value of arr[0] using ptr %d\n",*ptr);
    

}