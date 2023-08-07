#include<stdio.h>

void smallest();
int main()
{
    smallest();

    return 0;
}

void smallest()
{
    int a,b;

    printf("Enter the value of a and b: ");
    scanf("%d%d",&a,&b);

    if (a<b)
    {
        printf("%d is smallest number",a);
    }
    else
    {
        printf("%d is smallest number",b);
    }
} 