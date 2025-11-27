#include<stdio.h>
int main ()
{
    int arr[50],pos = 0, ele = 0, size = 0, i = 0;
    printf("Enter size of array: "); 
   scanf("%d",&size);
if (size > 50)
{
    printf("array out of bounds");
}
else 
{
    printf("Enter elements: \n");
    for (i = 0; i < size; i++)
        scanf("%d",&arr[i]);
}
printf("Enter element to search: \n");
scanf("%d",&ele);
for (i = 0; i <= size; i++)
    if(arr[i] == ele)   
    {
        printf("index: %d\n", i);
        break;
    }
return 0;   
}