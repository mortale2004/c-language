#include<stdio.h>

void aor();
int main()
{
    aor();
}

void aor()
{
    float l,b,area;

    printf("Enter the length of rectangle: ");
    scanf("%f",&l);
    printf("Enter the breadth of rectangle: ");
    scanf("%f",&b);

    area=l*b;

    printf("Area of Rectangle = %f",area);
}