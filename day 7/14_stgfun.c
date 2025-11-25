#include<stdio.h>
#include<string.h>
int main()
{
    char first_name[100] = "Karan";
    char last_name[] = "roy";
    char another_name[] = "kajal";
    printf("length of first name=%zu\n", strlen(first_name));
    strcat(first_name, last_name);
    printf("full name=%s\n", first_name);
    printf("%d\n", strcmp(first_name, another_name));
    if (strcmp(first_name, another_name) == 0)
    {
        printf("both are same\n");
    }
    else
    {
        printf("both are different\n");
    }
    return 0;
}
