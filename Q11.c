#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#define SIZE 30

typedef struct Employee {
    char first_name[SIZE];
    char last_name[SIZE];
    double monthly_salary;
}emp;

void emp_init(emp* e);
void set_salary(emp* e, double sal);
void emp_display(emp* e);
void give_raise(emp* e);

int main(int argc, char const *argv[])
{
    emp e1, e2;
    double sal1, sal2;
    emp_init(&e1);
    emp_display(&e1);
    printf("Enter the new monthly salary for employee 1: ");
    scanf("%lf",&sal1);
    set_salary(&e1, sal1);
    emp_display(&e1);
    emp_init(&e2);
    emp_display(&e2);
    printf("Enter the new monthly salary for employee 2: ");
    scanf("%lf",&sal2);
    set_salary(&e2, sal2);
    emp_display(&e2);
    give_raise(&e1);
    give_raise(&e2);
    emp_display(&e1);
    emp_display(&e2);
    return 0;
}

void emp_init(emp* e) {
    fflush(stdin);
    printf("Enter the first name of employee: ");
    fgets(e->first_name, SIZE, stdin);
    e->first_name[strcspn(e->first_name,"\n")] = '\0';
    printf("Enter the last name of employee: ");
    fgets(e->last_name, SIZE, stdin);
    e->last_name[strcspn(e->last_name,"\n")] = '\0';
    printf("Enter the monthly salary: ");
    scanf("%lf",&e->monthly_salary);
}

void set_salary(emp* e, double sal){
    e->monthly_salary = sal;
}

void emp_display(emp* e) {
    printf("First Name: %s\nLast_Name: %s\nSalary: %.2lf\n", e->first_name, e->last_name, e->monthly_salary);
}

void give_raise(emp* e) {
    // printf("%lf\n", e->monthly_salary);
    e->monthly_salary += e->monthly_salary * 0.1;
}