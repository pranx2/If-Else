#include<stdio.h>
//Input the basic salary and count the total salary.
//Code by [PRANTO];
int main (){

    float basic_salary;
    float gross_salary;
    printf("Input the basic salary of an employee: ");
    scanf("%f",& basic_salary);
if (basic_salary <= 10000)
{
    gross_salary = basic_salary + 0.2 + 0.8;
    printf("Employees gross salary is : %0.2f", gross_salary);
}
else if (basic_salary <= 20000)
{
    gross_salary = basic_salary +0.25 + 0.9;
    printf("Employees gross salary is : %0.2f", gross_salary);
}
else if (basic_salary > 20000)
{
    gross_salary = basic_salary + 0.3 + 0.95;
    printf("Employees gross salary is : %0.2f", gross_salary);
}
return 0;
}