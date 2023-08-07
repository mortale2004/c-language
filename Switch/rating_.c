#include<stdio.h>

int main (){
int a,r;

printf("Give your rating between (1-5):   ");
scanf("%d",&a);

switch (a)
{

    case 1 :
    r = 1;
    printf("Your Rating is :    %d " ,r);
    break;

    
    case 2 :
    r = 2;
    printf("Your Rating is :    %d " ,r);
    break;
    
    case 3 :
    r = 3;
    printf("Your Rating is :    %d " ,r);
    break;
    
    case 4 :
    r = 4;
    printf("Your Rating is :    %d " ,r);
    break;
    case 5 :
    r = 5;
    printf("Your Rating is :    %d " ,r);
    break;

    default:
    printf("please enter rating between (1 - 5)");
    break;
}



return 0;
}
