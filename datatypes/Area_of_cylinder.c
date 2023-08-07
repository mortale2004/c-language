#include<stdio.h>

int main(){

float pi=3.14,r,  h, area;

printf("Enter the height of cylinder:  ");
scanf("%f",&h);

printf("Enter the radius of cyliner:  ");
scanf("%f", &r);

area=  2 * pi *r *h + pi * r * r;

printf("The area of cylinder is : %f ", area);





    return 0;
}