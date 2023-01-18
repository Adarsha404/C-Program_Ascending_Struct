// Header file
#include <stdio.h>
#include <string.h>

// Initializing structure date
struct date
{
    int year;
    int month;
    int date;
};
// Initializing structure student
struct student
{
    char name[20];
    int roll_no;
    char section[12];
    struct date d;
} s[100];
void main()
{
    // Initializing variables and storing datas
    int a;
    struct student temp;
    printf("Enter the number of records: ");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("Enter the name of student: ");
        scanf("%s", &s[i].name);
        printf("Enter the section of student: ");
        scanf("%s", &s[i].section);
        printf("Enter the roll no of student: ");
        scanf("%d", &s[i].roll_no);
        printf("Enter the date of birth of the student in 'YYYY MM DD' format: ");
        scanf("%d%d%d", &s[i].d.year, &s[i].d.month, &s[i].d.date);
        printf("\n");
    }
    // Arranging in ascending order
    for (int i = 0; i < a - 1; i++)
    {
        for (int j = i + 1; j < a; j++)
        {
            if (s[i].roll_no > s[j].roll_no)
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    // Displaying output
    for (int i = 0; i < a; i++)
    {

        printf("The name of the student is %s\nThe section of the student is %s\nThe roll no of the student is %d ", s[i].name, s[i].section, s[i].roll_no);
        printf("\n");
        printf("The date of birth of the student is %d %d %d", s[i].d.year, s[i].d.month, s[i].d.date);
        printf("\n");
    }
}