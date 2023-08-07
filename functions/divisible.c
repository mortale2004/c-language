#include<stdio.h>

void divisible();
int main()
{
    divisible();

    return 0;
}

void divisible()
{
    int num;

    printf("Enter the number: ");
    scanf("%d",&num);

    if (num%5==0 && num%7==0)
    {
        printf("Number is divisible");
    }
    else
    {
        printf("Number is not divisible");
    }
} 