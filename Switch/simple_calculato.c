#include<stdio.h>

int main ()
{ float num1 , num2 ;
  char c;
  int z , y ;

  printf("Enter first number:  ");
  scanf("%f", &num1);

  printf("Enter second number:  ");
  scanf("%f", &num2);

  printf("Enter operator like (+,-,*,/, %)  : "  );
  scanf(" %c", &c);

  switch(c)
  {
    case '+' :
    printf("%.0f %c %.0f = %.0f", num1 , c , num2 , num1 + num2);
    break;
    case '-' :
    printf("%.0f %c %.0f = %.0f", num1 , c , num2 , num1 - num2);
    break;
    case '*' :
    printf("%.0f %c %.0f = %.0f", num1 , c , num2 , num1 * num2);
    break;
    case '/' :
    printf("%.0f %c %.0f = %.2f", num1 , c , num2 , num1 / num2);
    break;
    case '%' :
    z = num1;
    y = num2;
    printf("%d", z % y);
    break;
    default
    printf("Enter correct operator");
    break;
  }
    return 0;
}