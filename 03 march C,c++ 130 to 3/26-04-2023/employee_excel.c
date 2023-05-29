#include <stdio.h>
struct employee
{
    char name[50];
    int age;
    char mobile[10];
    char email[50];
    int salary;
};

int main()
{
    FILE *fp;
    fp = fopen("employee.xls", "w");
    int n;
    printf("Enter number of employee: ");
    scanf("%d", &n);
    struct employee e[n];
    for (int i = 0; i < n; i++)
    
    {
        printf("Enter Details of employee %d\n", i + 1);
        printf("Enter NAme: ");
        scanf(" ");
        gets(e[i].name);
        printf("Enter Age: ");
        scanf("%d", &e[i].age);
        printf("Enter Mobile: ");
        scanf(" ");
        gets(e[i].mobile);
        printf("Enter email: ");
        gets(e[i].email);
        printf("Enter Salary: ");
        scanf("%d", &e[i].salary);
    }
    printf("*****************************************************************\n");
    printf("\tNAme\t\t\t|\tAge\t|\tMobile\t|\temail\t|\tSalary\n");
    fprintf(fp, "\tNAme\tAge\tMobile\temail\tSalary\n");
    printf("******************************************************************************\n");
    for (int i = 0; i < n; i++)
    {
        printf("\t%s\t\t\t|\t%d\t|\t%s\t|\t%s\t|\t%d\n", e[i].name, e[i].age, e[i].mobile, e[i].email, e[i].salary);
        printf("--------------------------------------------------------------------------------------\n");
        fprintf(fp, "\t%s\t%d\t%s\t%s\t%d\n", e[i].name, e[i].age, e[i].mobile, e[i].email, e[i].salary);
    }
    printf("*****************************************************************************\n");
    fclose(fp);
    return 0;
}