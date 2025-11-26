#include    <stdio.h>
#include    <string.h>
struct employee
{
    char name[30];
    int id;
    float salary;
} emp1, emp2, emp3;

int main()
{
    printf("Enter details of employee 1 (name, id, salary): \n");
    scanf("%s %d %f", emp1.name, &emp1.id, &emp1.salary);
    printf("Enter details of employee 2 (name, id, salary): \n");    
    scanf("%s %d %f", emp2.name, &emp2.id, &emp2.salary);
    printf("Enter details of employee 3 (name, id, salary): \n");
    scanf("%s %d %f", emp3.name, &emp3.id, &emp3.salary);

    printf("Details of Employee 1:\n");
    printf("Name: %s\n", emp1.name);
    printf("ID: %d\n", emp1.id);
    printf("Salary: %.2f\n", emp1.salary);

    printf("\nDetails of Employee 2:\n");
    printf("Name: %s\n", emp2.name);
    printf("ID: %d\n", emp2.id);
    printf("Salary: %.2f\n", emp2.salary);

    printf("\nDetails of Employee 3:\n");
    printf("Name: %s\n", emp3.name);
    printf("ID: %d\n", emp3.id);
    printf("Salary: %.2f\n", emp3.salary);

    return 0;
}