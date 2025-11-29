#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head, *newnode, *tail;
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
            head = tail = newnode;
            newnode->next = head; // Point to itself
        }
        else
        {
            tail->next = newnode;
            newnode->next = head; // Point to head (circular)
            tail = newnode;
        }
        printf("Do you want to continue (0,1):");
        scanf("%d", &choice);
    }

    printf("Elements in the list are: ");
    tail = head;
    if (tail != NULL)
    {
        do
        {
            printf("%d ",tail->data);
            tail = tail->next;
        } while (tail != head);
    }
    printf("\n");
    return 0;
}
