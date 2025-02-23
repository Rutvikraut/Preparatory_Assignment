// Write a program to calculate the grade of a student. There are five subjects. Marks in each subject are entered from keyboard.

#include <stdio.h>
#define MAX 5
char calcGrade(int marks[]){
    int total=0;
    for(int i=0;i<MAX;i++){
        total=total+marks[i];
    }

    if(total >= 90) return 'E';
    else if(90 > total && total >= 80) return 'A';
    else if(80 > total && total >= 70) return 'B';
    else if(70 > total && total >= 60) return 'C';
    else if(60 > total) return 'F';
}
int main(){
    int marks[MAX];
    for(int i=0;i<MAX;i++){
        printf("Subject %d: ", i + 1);
        scanf("%d",&marks[i]);
    }
    printf("Grade : %c",calcGrade(marks));
    return 0;
}