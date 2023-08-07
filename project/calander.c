#include<stdio.h>

    void jan();
    void feb();
    void mar();
    void apr();
    void may();
    void june();
    void july();
    void aug();
    void sep();
    void oct();
    void nov();
    void dec();

int main()
{   

    int month,i;
    char decision;

for (i=1;i<=50;i++)
{
    printf("\n\nEnter the month of year which you want calander: ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
        jan();
        break;
        case 2:
        feb();
        break;
        case 3:
        mar();
        break;
        case 4:
        apr();
        break;
        case 5:
        may();
        break;
        case 6:
        june();
        break;
        case 7:
        july();
        break;
        case 8:
        aug();
        break;
        case 9:
        sep();
        break;
        case 10:
        oct();
        break;
        case 11:
        nov();
        break;
        case 12:
        dec();
        break;
        default: printf("\nEnter correct choice!");

    }
        printf("\n Do you want to see another calender: ");
        scanf(" %c",&decision);
        if (decision=='N' || decision=='n')
        {
            break;
        }
 
}
}



    void jan()
    {
        printf("\n\n====================January 2023====++==============\n");
        printf("______________________________________________________\n");
        printf("Mon            2        9      16      23      30\n");
        printf("Tue            3       10      17      24      31\n");
        printf("Wed            4       11      18      25       \n");
        printf("Thu            5       12      19      26       \n");
        printf("Fri            6       13      20      27       \n");
        printf("Sat            7       14      21      28       \n");
        printf("Sun      1     8       15      22      29       \n");
        printf("_______________________________________________________\n");
    }
    void feb()
    {
        
        printf("\n\n==================February 2023===+===============\n\n");
        printf("______________________________________________________\n");
        printf("Mon            6       13      20      27      \n");
        printf("Tue            7       14      21      28      \n");
        printf("Wed      1     8       15      22            \n");
        printf("Thu      2     9       16      23             \n");
        printf("Fri      3    10       17      24             \n");
        printf("Sat      4    11       18      25             \n");
        printf("Sun      5    12       19      26             \n");
        printf("_______________________________________________________\n");
    }
    void mar()
    {
        printf("\n\n==================March 2023===+===============\n\n");
        printf("______________________________________________________\n");
        printf("Mon            6       13      20      27      \n");
        printf("Tue            7       14      21      28      \n");
        printf("Wed      1     8       15      22      29      \n");
        printf("Thu      2     9       16      23      30       \n");
        printf("Fri      3    10       17      24      31       \n");
        printf("Sat      4    11       18      25             \n");
        printf("Sun      5    12       19      26             \n");
        printf("_______________________________________________________\n");
    }
    void apr()
    {
        
        printf("\n\n==================April 2023===+===============\n\n");
        printf("______________________________________________________\n");
        printf("Mon           3       10      17      24      \n");
        printf("Tue           4       11      18      25      \n");
        printf("Wed           5       12      19      26      \n");
        printf("Thu           6       13      20      27       \n");
        printf("Fri           7       14      21      28       \n");
        printf("Sat      1    8       15      22      29       \n");
        printf("Sun      2    9       16      23      30       \n");
        printf("_______________________________________________________\n");
    }
    void may()
    {
        
        printf("\n\n==================May 2023=======================\n\n");
        printf("______________________________________________________\n");
        printf("Mon      1     8      15      22      29      \n");
        printf("Tue      2     9      16      23      30      \n");
        printf("Wed      3    10      17      24      31      \n");
        printf("Thu      4    11      18      25             \n");
        printf("Fri      5    12      19      26             \n");
        printf("Sat      6    13      20      27             \n");
        printf("Sun      7    14      21      28             \n");
        printf("_______________________________________________________\n");
    }
    void june()
    {
        
        printf("\n\n==================June 2023===================\n\n");
        printf("______________________________________________________\n");
        printf("Mon            5       12      19      26      \n");
        printf("Tue            6       13      20      27      \n");
        printf("Wed            7       14      21      28      \n");
        printf("Thu      1     8       15      22      29       \n");
        printf("Fri      2     9       16      23      30       \n");
        printf("Sat      3    10       17      24             \n");
        printf("Sun      4    11       18      25             \n");
        printf("_______________________________________________________\n");
    }
    void july()
    {
        printf("\n\n==================July 2023===+===============\n\n");
        printf("______________________________________________________\n");
        printf("Mon           3       10      17      24     31  \n");
        printf("Tue           4       11      18      25      \n");
        printf("Wed           5       12      19      26      \n");
        printf("Thu           6       13      20      27       \n");
        printf("Fri           7       14      21      28       \n");
        printf("Sat      1    8       15      22      29       \n");
        printf("Sun      2    9       16      23      30       \n");
        printf("_______________________________________________________\n");
    }
    void aug()
    {
        
        printf("\n\n==================Augest 2023===+===============\n\n");
        printf("______________________________________________________\n");
        printf("Mon            7       14      21      28      \n");
        printf("Tue      1     8       15      22      29      \n");
        printf("Wed      2     9       16      23      30      \n");
        printf("Thu      3    10       17      24      31        \n");
        printf("Fri      4    11       18      25             \n");
        printf("Sat      5    12       19      26             \n");
        printf("Sun      6    13       20      27            \n");
        printf("_______________________________________________________\n");
    }
    void sep()
    {
        
        printf("\n\n==================Sepeteber 2023===================\n\n");
        printf("______________________________________________________\n");
        printf("Mon            4       11      18      25      \n");
        printf("Tue            5       12      19      26      \n");
        printf("Wed            6       13      20      27      \n");
        printf("Thu            7       14      21      28       \n");
        printf("Fri      1     8       15      22      29       \n");
        printf("Sat      2     9       16      23      30       \n");
        printf("Sun      3    10       17      24             \n");
        printf("_______________________________________________________\n");
    }
    void oct()
    {
        printf("\n\n====================Octomber 2023==================\n");
        printf("______________________________________________________\n");
        printf("Mon            2        9      16      23      30\n");
        printf("Tue            3       10      17      24      31\n");
        printf("Wed            4       11      18      25       \n");
        printf("Thu            5       12      19      26       \n");
        printf("Fri            6       13      20      27       \n");
        printf("Sat            7       14      21      28       \n");
        printf("Sun      1     8       15      22      29       \n");
        printf("_______________________________________________________\n");
    }
    void nov()
    {
            printf("\n\n==================March 2023===+===============\n\n");
        printf("______________________________________________________\n");
        printf("Mon            6       13      20      27      \n");
        printf("Tue            7       14      21      28      \n");
        printf("Wed      1     8       15      22      29      \n");
        printf("Thu      2     9       16      23      30       \n");
        printf("Fri      3    10       17      24             \n");
        printf("Sat      4    11       18      25             \n");
        printf("Sun      5    12       19      26             \n");
        printf("_______________________________________________________\n");
    
    }
    void dec()
    {
        printf("\n\n==================December 2023===================\n\n");
        printf("______________________________________________________\n");
        printf("Mon            5       12      19      26      \n");
        printf("Tue            6       13      20      27      \n");
        printf("Wed            7       14      21      28      \n");
        printf("Thu      1     8       15      22      29       \n");
        printf("Fri      2     9       16      23      30       \n");
        printf("Sat      3    10       17      24      31       \n");
        printf("Sun      4    11       18      25             \n");
        printf("_______________________________________________________\n");
    }
