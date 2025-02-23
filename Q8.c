#include<stdio.h>
#define MAX 100

struct Student
{
    char name[MAX];
    char rollNo[MAX];
    int marks;
};

void readStudentDetails(struct Student* s, int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter student name: ");
        scanf("%s", s[i].name);
        printf("Enter student roll number: ");
        scanf("%s", s[i].rollNo);
        printf("Enter student marks: ");
        scanf("%d",&s[i].marks);
    }
}

void printStudentDetails(struct Student* s, int n) {
    printf("Name\tRollNo\tMarks\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\t%d\n",s[i].name, s[i].rollNo, s[i].marks);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    struct Student st[MAX];
    printf("Enter the number of students: ");
    scanf("%d", &n);
    readStudentDetails(st, n);
    printStudentDetails(st, n);
    return 0;
}


