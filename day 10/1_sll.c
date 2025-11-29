#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *current;
int main()
{
    head = NULL;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter a number:");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            head = current = newnode;
            current = newnode;
        }
        else
        {
            current->next = newnode;
            current = newnode;
        }
        printf("Do you want to continue (0,1):");
        scanf("%d", &choice);
    }

    printf("elements in the list are:");
    current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    return 0;
}
