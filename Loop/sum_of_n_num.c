// program to print sum of n number of natural numbers.
#include<stdio.h>

int main(){
   int i=1,sum=0,n;

   printf("Enter the n number of numbers\n");
   scanf("%d", &n);
   
   while (i<=n)
   {
    sum=sum+i;
     i++;
   }
     printf("%d\n", sum);

    return 0;
}