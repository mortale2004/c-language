
#include<stdio.h>

void pos_neg();
int main()
{
    pos_neg();

    return 0;
}

void pos_neg()
{
    int num;

    printf("Enter the value of num: ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Negetive number");
    }
} 