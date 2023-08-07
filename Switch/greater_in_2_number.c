#include<stdio.h>

int main(){
int a , b ;
printf("Enter the first number");
scanf("%d", &a);
printf("Enter the second number");
scanf("%d", &b);

switch (a>b)
{
   case 0 :
   printf("%d is smaller than %d", a , b); 
   
   case 1 :
   printf("%d is greater than %d", a , b);
    }

    return 0;
}   
