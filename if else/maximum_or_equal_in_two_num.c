#include<stdio.h>

int main(){

int a,b;

printf("Enter first  number:   ");
scanf("%d",&a);

printf("Enter second number:  ");
scanf("%d",&b);


if (a>b)
printf("%d is maximum than %d",a,b);
else if (a<b)
printf("%d is maximum than %d",b,a);
else if (a==b)
printf("First Number is equal to second");

    return 0;
}