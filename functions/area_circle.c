#include<stdio.h>
#define pi 3.14

void AoC();
int main()
{
    AoC();

    return 0;
} 

void AoC()
{
    float area,r;

    printf("Enter the radius of circle: ");
    scanf("%f",&r);

    area=pi*r*r;

    printf("Area of circle = %f",area);
}