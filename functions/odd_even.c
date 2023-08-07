#include<stdio.h>

void oddeven();
int main()
{
    oddeven();

    return 0;
}

void oddeven()
{
    int num;

    printf("Enter the value of num: ");
    scanf("%d",&num);

    if (num%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }
} 