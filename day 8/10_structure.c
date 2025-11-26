#include <stdio.h>
#include<string.h>

struct student
{
    char name[30];
    int roll_no;
    float marks;
} st1, st2, st3;

int main()
{
    strcpy(st1.name,"saad");
    st1.roll_no = 7;
    st1.marks = 25;
    strcpy(st2.name,"ali");
    st2.roll_no = 8;   
    st2.marks = 30;
    strcpy(st3.name,"umer");    
    st3.roll_no = 9;
    st3.marks = 35;

    printf("Details of student 1:\n");
    printf("Student name:%s\n",st1.name);
    printf("Student roll number:%d\n",st1.roll_no);
    printf("Student Marks:%.2f\n",st1.marks);

     printf("Details of student 2:\n");
    printf("Student name:%s\n",st2.name);
    printf("Student roll number:%d\n",st2.roll_no);
    printf("Student Marks:%.2f\n",st2.marks);

     printf("Details of student 3:\n");
    printf("Student name:%s\n",st3.name);
    printf("Student roll number:%d\n",st3.roll_no);
    printf("Student Marks:%.2f\n",st3.marks);

    return 0;
}