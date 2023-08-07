#include<stdio.h>

int main(){
 int day;
 char c;
 printf("Enter the first letter of day :  ");
 scanf("%c", &c);

 switch (c)
 {
    case 'm' :
    printf("Monday");
    break;
    case 't' :
    printf("Tuesday");
    case 'w' :
    printf("Wednesday");
    case 't' :
    printf("Thursday");
    case 'f' :
    printf("Friday");
    case 's' :
    printf("Saturady");
    default :
    printf("Enter correct input");
    }
    return 0;
}