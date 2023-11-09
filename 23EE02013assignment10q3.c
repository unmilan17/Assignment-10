#include <stdio.h>
#include <string.h>
struct student
{
    char name[30];
    int marks[5];
};

int main()
{
    int n;
    printf("Number of students : ");
    scanf("%d", &n);
    struct student stud[n];
    for (int i = 0; i < n; i++)
    {

        printf("Enter name of student %d: ", i + 1);
        scanf("%s", stud[i].name);
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks of subject number %d: ", j + 1);
            scanf("%d", &stud[i].marks[j]);
        }
    }

    char key[30];
    printf("Enter name of student to find : ");

    scanf("%s", key);
    int sum = 0, chck = 0;
    for (int k = 0; k < n; k++)
    {
        if (strcmp(stud[k].name, key) == 0)
        {
            chck = 1;
            for (int l = 0; l < 5; l++)
            {
                sum += stud[k].marks[l];
            }
            break;
        }
    }
    if (chck == 0)
    {
        printf("Student not found!");
    }
    else
    {
        float avg = sum / 5.0;

        printf("\nTotal marks are %d\nAverage marks are %f", sum, avg);
    }
    return 0;
}