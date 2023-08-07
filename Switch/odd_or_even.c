#include<stdio.h>

int main(){
int a;
printf("Enter the number: ");
scanf("%d", &a);

switch(a%2==0)
{
    case 0 :
    printf("%d is odd number. ", a);
    break;
    case 1 :
    printf("%d is even number.", a);
    break;
}
    return 0;
}