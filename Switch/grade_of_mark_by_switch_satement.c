#include <stdio.h>

int main()
{
    int mark;
    char marks;

    printf("Enter your marks:  ");
    scanf("%d", &mark);
    if (mark < 100 && mark > 90)
        marks = 'a';
    if (mark < 90 && mark > 80)
        marks = 'b';
    if (mark < 80 && mark > 70)
        marks = 'c';
    if (mark < 70 && mark > 60)
        marks = 'd';
    if (mark < 60 && mark > 50)
        marks = 'e';
    switch (marks)
    {
    case 'a':
        printf("Your grade is A");
        break;
    case 'b':
        printf("Your grade is B");
        break;
    case 'c':
        printf("Your grade is C");
        break;
    case 'd':
        printf("Your grade is D");
        break;
    case 'e':
        printf("Your grade is E");
        break;
    }

    return 0;
}