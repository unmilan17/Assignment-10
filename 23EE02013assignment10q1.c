#include <stdio.h>

struct stud
{
    int rollno;
    char name[50];
    int age;
};

int main()
{
    struct stud students[5];
    for (int i = 0; i < 5; i++)
    {
        students[i].rollno = i + 1;
        printf("Enter name of Roll Number %d : ", students[i].rollno);
        scanf("%s", students[i].name);
        printf("Enter age for Roll Number %d : ", students[i].rollno);
        scanf("%d", &students[i].age);
    }

    printf("\nDetails of student with roll number 2 :\nName: %s\nAge: %d\n", students[1].name, students[1].age);

    return 0;
}