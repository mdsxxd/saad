#include<stdio.h>
int stack[100], top = -1;
void push();
void pop();
void display();
int main()
{
    int choice;
    while(1)
    {
        printf("enter your choice:\n1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: return 0;
            default: printf("invalid choice\n");
        }
    }
}
void push()
{
    int val;
    if(top==99)
    {
        printf("stack overflow\n");
    }
    else
    {
        printf("enter the value to be pushed:\n");
        scanf("%d",&val);
        top++;
        stack[top]=val;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack underflow\n");
    }
    else
    {
        printf("popped element: %d\n",stack[top]);
        top--;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("stack elements are:\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
