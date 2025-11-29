#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

struct Student {
    char name[50];
    int regNo;
    float marks;
    int age;
};

struct Student stack[MAX];
int top = -1;

void push() {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot add more students.\n");
        return;
    }
    top++;
    printf("Enter Student Name: ");
    scanf("%s", stack[top].name);
    printf("Enter Register Number: ");
    scanf("%d", &stack[top].regNo);
    printf("Enter Marks: ");
    scanf("%f", &stack[top].marks);
    printf("Enter Age: ");
    scanf("%d", &stack[top].age);
    printf("Student added successfully!\n\n");
}

void pop() {
    if (top == -1) {
        printf("Stack Underflow! No students to remove.\n");
        return;
    }
    printf("Removed Student: %s\n\n", stack[top].name);
    top--;
}

void display() {
    if (top == -1) {
        printf("No students in the system.\n");
        return;
    }
    printf("\n========== Student Records ==========\n");
    for (int i = top; i >= 0; i--) {
        printf("Name: %s\n Register No: %d\n Marks: %.2f\n Age: %d\n",
               stack[i].name, stack[i].regNo, stack[i].marks, stack[i].age);
    }
    printf("=====================================\n\n");
}

int main() {
    int choice;
    
    while (1) {
        printf("===== Student Management System =====\n");
        printf("1. Add Student (Push)\n");
        printf("2. Remove Student (Pop)\n");
        printf("3. Display All Students\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting... Thank you!\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n\n");
        }
    }
    
    return 0;
}