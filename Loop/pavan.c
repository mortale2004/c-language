#include<stdio.h>

int main ()
{
   int i,j,k,m,n;

    printf("Enter a number: ");
    scanf("%d",&n);

    printf("\n\n\n\n\n");
    for (i=1; i<=n; i++)
    {   
        
        
        for (j=1; j<=n; j++)
        {
            if (j==1||j==n||i==1||i==n)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        printf("\n");

    }
    for (i=1; i<=n-2; i++)
    {
        printf("*");
        printf("\n");
    }

    printf("\n\n\n");
    m=n;
    for (i=1; i<=n; i++)
    {
    
        for (j=1; j<=m-1; j++)
        {  
            printf(" ");
        }
        for (k=1; k<=2*i-1; k++)
        {
            if (i==1||j==3||j==m-1||k==1||k==2*i-1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        
        m--;
        printf("\n");
    }
    printf("\n\n\n");
   
    m=1;
    for (i=n; i>=1; i--)
    {
        for (j=1; j<m; j++)
        {
            printf(" ");
        }
        for (k=1; k<=2*i-1; k++)
        {
            if (i==1||j==m-1||k==1||k==2*i-1)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        m++;
        printf("\n");
    }
    printf("\n\n\n");
    
    m=n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=m-1; j++)
        {
            printf(" ");
        }
        for (k=1; k<=2*i-1; k++)
        {
            if (i==1||j==3||j==m-1||k==1||k==2*i-1)
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        m--;
        printf("\n");
    }
    printf("\n\n\n");
   for (i=1; i<=n; i++)
   {
     for (j=1; j<=n; j++)
     {
        if (j==1||j==n||j==i)
        {
            printf("*");
        }
        else
        {
            printf(" ");
        }
     }
     printf("\n");
   }

    return 0;
}