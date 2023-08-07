#include<stdio.h>

int main(){
int a;
printf("Enter the number:  ");
scanf("%d", &a);

switch (a>0)
{ case 1 :
  printf("%d is positive.", a);
  break;
  case 0 :
 { switch (a<0)
   { case 1 :
    printf("%d is negetive.", a);
    break;
    case 0 :
    printf("Numeber is zero.", a);
    break; 
   }
 }break;
}
    return 0;
}