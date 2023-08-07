#include<stdio.h>

void year();
int main()
{
    year();

    return 0;
}

void year()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);

    if (year%4==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
} 