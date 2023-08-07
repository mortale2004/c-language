#include<stdio.h>

int main(){
  int i=0,j=0,rows;
  printf("Enter the rows:  ");
  scanf("%d",&rows);

  for (i=rows; i>=0; i--)
  {
    for (j=0; j<i; j++)
    {
      printf("\3");
    }
    printf("\n");
  }
  return 0;
}