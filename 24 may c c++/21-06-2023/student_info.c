#include <stdio.h>
int main()
{

    int rollno, age, h, e, g, s, m, total, num;
    unsigned long long int mobile;
    float percent;
    char grade;
    char name[50];
    printf("Enter number of students: ");
    scanf("%d", &num);
    FILE *fp; 
    fp = fopen("Student_data.xls", "w");
    fprintf(fp, "rollno\tage\tmobile\tname\th\t m\t e\t s\t g\t total\tpercent\t grade\n");
    for (int i = 1; i <= num; i++)
    {
        printf("Enter ROllnumber: ");
        scanf("%d", &rollno);

        printf("Enter AGe: ");
        scanf("%d", &age);

        printf("Enter mobile: ");
        scanf("%llu", &mobile);

        printf("Enter name: ");
        scanf(" ");
        gets(name);

        printf("Enter Hindi: ");
        scanf("%d", &h);
        printf("Enter Maths: ");
        scanf("%d", &m);
        printf("Enter English: ");
        scanf("%d", &e);
        printf("Enter Science: ");
        scanf("%d", &s);
        printf("Enter Gujarati: ");
        scanf("%d", &g);
        total = h + m + e + s + g;
        percent = (float)total / 5;
        if (percent >= 90 && percent < 100)
        {
            grade = 'A';
        }
        else if (percent >= 80 && percent < 90)
        {
            grade = 'B';
        }
        else if (percent >= 70 && percent < 80)
        {
            grade = 'C';
        }
        else if (percent >= 60 && percent < 70)
        {
            grade = 'D';
        }
        else if (percent >= 50 && percent < 60)
        {
            grade = 'E';
        }
        else if (percent >= 33 && percent < 50)
        {
            grade = 'F';
        }
        else if (percent < 33 && percent > 0)
        {
            grade = 'O';
        }
        else
        {
            printf("Enter Percentage Between 1 to 100 ");
        }
        fprintf(fp, "%d \t %d \t %llu \t%s \t%d \t%d \t%d \t%d \t %d\t %d\t %f \t%c\n", rollno, age, mobile, name, h, m, e, s, g, total, percent, grade);
    }
    fclose(fp);

    return 0;
}