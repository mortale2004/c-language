#include<stdio.h>

void largest();
int main()
{
    largest();

    return 0;
}

void largest()
{
    int a,b;

    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);

    if (a>b)
    {
        printf("%d is largest number",a);
    }
    else
    {
        printf("%d is largest number",b);
    }
} 