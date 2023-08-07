#include<stdio.h>

int main(){

int a,b,c;

printf("Enter first  number:   ");
scanf("%d",&a);

printf("Enter second number:  ");
scanf("%d",&b);

printf("Enter third number:  ");
scanf("%d",&c);


if (a>b && a>c)
printf("%d is maximum than %d",a,b,c);
else if (a<b && c<b )
printf("%d is maximum than %d and %d",b,a,c);
else if (a<c && b<c )
printf("%d is maximum than %d and %d",c,a,b); 
else if  (a==b)
printf("First Number is equal to second and third Number");

    return 0;
}