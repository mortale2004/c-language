#include<stdio.h>

int main (){

int rollno;
float per;
char name;

printf("Enter Students data");

printf("Enter your name");
scanf("%c", &name);

printf("Enter your roll no");
scanf("%d", &rollno);

printf("Enter your percentage");
scanf("%f",&per);

if(per > 40)
{
    printf("Students name is %c\n ", name);
    printf("Students roll no is : %d\n", rollno);
    printf("Student percentage is : %f\n", per);
    printf("Student is passed");
}
else
{
    
    printf("Students name is %c \n", name);
    printf("Students roll no is : %d\n", rollno);
    printf("Student percentage is : %f\n", per);
    printf("Student is failed");
}
    return 0;
}