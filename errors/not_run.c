#include <stdio.h>
// #include<conio.h>
int main()
{
  float a, b, c;
  char f;
  // clrscr();
  printf("enter the first number:  ");
  scanf("%f",&b);
  printf("enter the operator:  ");
  scanf("%c",&f);

  printf("enter the second number:  ");
  scanf("%f",&a);
  switch (f)
  {
  case '-':
    c = b - a;
    break;

  case '+':
    c = b + a;
    break;
  case '*':
    c = b * a;
    break;

  case '/':
    c = b / a;
    break;
  }
  printf("%f %c %f = %f", b, f, a, c);

  // getch();
  return 0;
}
