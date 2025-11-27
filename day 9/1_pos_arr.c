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
    printf("Enter elements in array: \n");
    for (i = 0; i < size; i++)
        scanf("%d",&arr[i]);
}
printf("Enter element to insert: \n");
scanf("%d",&ele);
printf("Enter position to insert element: \n");
scanf("%d",&pos);
for (i = size - 1; i >= pos - 1; i--)
    arr[i + 1] = arr[i];
arr[pos] = ele;
size++;
printf("Array after insertion: \n");
for (i = 0; i < size; i++)
    printf("%d ",arr[i]);       
return 0;
}