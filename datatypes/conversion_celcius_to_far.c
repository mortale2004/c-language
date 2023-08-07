#include<stdio.h>

int main (){

float far , cel  ;

printf("Enter the celcius:" );
scanf("%f",&cel);

far = ( cel * 9/5) + 32 ;

printf(" %f Celcius in faranhiet is : %f", cel , far);


    return 0;
}