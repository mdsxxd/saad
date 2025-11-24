#include<stdio.h>       
int main() 
{
    int  i;

    for (i = 1; i <= 10; i++) 
    {
        if (i == 7) 
        {
            break;  // Exit the loop if i exceeds 10
        }
        
        if (i == 5)
        {
            continue;  // Skip the iteration when i is 5
        }
        printf("%d ", i);
    }   
    
    return 0;
}