#include<stdio.h>

int main (){

float marks,chem,bio,phy;

printf("Enter your marks in chemistry:  ");
scanf("%f",&chem);

printf("Enter your marks in biology:  ");
scanf("%f",&bio);
printf("Enter the marks in physics:  ");
scanf("%f",&phy);

marks = (chem + phy + bio)/3;

if (marks<33 || phy <40 || chem <40 || bio<40 ){
printf("You are failed");
}
else
printf("Your are passsed with  %f perrcent marks", marks);


    return 0;
}