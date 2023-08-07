#include<stdio.h>

int main(){

    int n, prime= 0, i;
    printf("Enter the number:  ");
    scanf("%d",&n);

    for(i=2; i<n ; i++)
        if(n%2==0)
    {
        prime=0;
    }
    else 
    prime = 1;

    if (prime == 0)
    printf("This is not a prime number");
    else
    printf("This is a prime number");

    return 0;
}