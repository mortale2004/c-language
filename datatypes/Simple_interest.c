#include<stdio.h>

int main (){

float p, r, n , si;

printf("Enter the principle amount:");
scanf("%f", &p);

printf("Enter thr rate:  ");
scanf("%f", &r);

printf("Enter Period in years:   " );
scanf("%f", &n);

si = p * r * n /100;

printf("The simple interest is :  %f " , si);





    return 0;

}