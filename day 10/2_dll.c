#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
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
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = current = newnode;
        }
        else
        {
            current->next = newnode;
            newnode->prev = current;
            current = newnode;
        }
        printf("Do you want to continue (0,1):");
        scanf("%d", &choice);
    }

    printf("elements in the list are (forward): ");
    current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }

    printf("\nElements in the list are (backward): ");
    current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->prev;
    }
    return 0;
}
