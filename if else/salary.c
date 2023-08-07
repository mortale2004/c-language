#include<stdio.h>

int main (){

    int bonus,tot_salary,salary,accamption;
    salary = 1500;
    printf("Enter your salary");
    scanf("%d", &salary);

    if (salary < 1500)
    {
    bonus = 500;
    accamption=50;
    tot_salary = salary + accamption+bonus;
    printf("Your salary is %d", tot_salary);
    }
    else
    {
        accamption =100;
        tot_salary = salary + accamption;
        printf("your salary is %d", tot_salary);

    }
    return 0;

}