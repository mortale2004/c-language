#include<stdio.h>



int main()
{
    int choice,nsize,i,pagain,tot_score=0;
    int c_mark[5]={0,0,0,0,0},f_mark[5]={0,0,0,0,0},b_mark[5]={0,0,0,0,0},w_mark[5]={0,0,0,0,0},tot_mark_c= 0,tot_mark_w= 0 , tot_mark_b = 0, tot_mark_f=0;
    char c_ans[5],d_ans[5],b_ans[5],w_ans[5], name[20];

    
    printf("Enter Your  name: ");
    scanf("%s",name);
    printf("\n\nHi ");
    printf("%s",name);
    

    for (i=1;i<=10;i++)
    {
    printf("\n\n**** Welcome to quiz game ****\n");
    printf("\nEnter the subject of which you want to play quiz\n\n");
    printf("1.C Language\n");
    printf("2.Web Technology\n");
    printf("3.Basic of Computer System\n");
    printf("4.Fundamental of Digital Electronics\n");
    scanf("%d",&choice);

    switch(choice)
    {
        case 1:
    printf("\n1.Who is the developer of C Language\n");
    printf("a.Dennis Rithie\n");
    printf("b.Charles Babbage\n");
    printf("c.Ken Thomspon\n");
    printf("d.Tim Berneres Lee\n");
    printf("\nAns: ");
    scanf(" %c",&c_ans[0]);

    printf("\n2. All keywords in C are in __________\n");
    printf("a. LowerCase letters\n");
    printf("b. UpperCase letters\n");
    printf("c. CamelCase letters\n");
    printf("d. None of the mentioned\n");
    printf("\nAns: ");
    scanf(" %c",&c_ans[1]);

    printf("\n3. Which of the following is true for variable names in C?\n");
    printf("a. They can contain alphanumeric characters as well as special characters\n");
    printf("b. It is not an error to declare a variable to be one of the keywords\n");
    printf("c. Variable names cannot start with a digit\n");
    printf("d. Variable can be of any length\n");
    printf("\nAns: ");
    scanf(" %c",&c_ans[2]);
    
    printf("\n4. Which is valid C expression?\n");
    printf("a. int my_num = 100,000;\n");
    printf("b. int my_num = 100000;\n");
    printf("c. int my num = 1000;\n");
    printf("d. int $my_num = 10000;\n");
    printf("\nAns: ");
    scanf(" %c",&c_ans[3]);
    
    printf("\n5. What is #include <stdio.h>?\n");
    printf("a. Preprocessor directive\n");
    printf("b. Inclusion directive\n");
    printf("c. File inclusion directive\n");
    printf("d. None of the mentioned\n");
    printf("\nAns: ");
    scanf(" %c",&c_ans[4]);

    if (c_ans[0]=='a')
    {
        c_mark[0] = 1;
    }
    if (c_ans[1]=='a')
    {
        c_mark[1] = 1;
    }
    if (c_ans[2]=='c')
    {
        c_mark[2] = 1;
    }
    if (c_ans[3]=='b')
    {
        c_mark[3] = 1;
    }
    if (c_ans[4]=='a')
    {
        c_mark[4] = 1;
    }
    printf("Your Marks as per question: \n");
    printf("1 = %d\n",c_mark[0]);
    printf("2 = %d\n",c_mark[1]);
    printf("3 = %d\n",c_mark[2]);
    printf("4 = %d\n",c_mark[3]);
    printf("5 = %d\n",c_mark[4]);
    tot_mark_c = c_mark[0] + c_mark[1] + c_mark[2] + c_mark[3] + c_mark[4];
    printf("\nYour Total Marks in C Language are %d",tot_mark_c);
  
    
        break;
        
        case 2:
    
    printf("\nWhich of the following is not an HTML tag?\n");
    printf("a. < select >\n");
    printf("b. < input >\n");
    printf("c. < textarea >\n");
    printf("d. < list >\n");
    scanf(" %c",&w_ans[0]);
    
    printf("\n2. Which among these is not a Web browser?\n");
    printf("a. www\n");
    printf("b. Chrome\n");
    printf("c. Opera\n");
    printf("d. NetSurf\n");
    scanf(" %c",&w_ans[1]);

    printf("\n3. World Wide Web was invented by\n");
    printf("a. obert E. Kahn\n");
    printf("b. Ted Nelson\n");
    printf("c. Tim Berners-Lee\n");
    printf("d. Linus Torvalds\n");
    scanf(" %c",&w_ans[2]);

    printf("\n4. What does HTML stand for?\n");
    printf("a. Hyper Text Markup Language\n");
    printf("b. High Text Markup Language\n");
    printf("c. Hyper Tabular Markup Language\n");
    printf("d. None of these\n");
    scanf(" %c",&w_ans[3]);

    printf("\n5. HTTPs stands for\n");
    printf("a. Hyper Text Transfer Protocol Secure\n");
    printf("b. High Text Transfer Protocol Secure\n");
    printf("c. Hyper Transfer Protocol Standard\n");
    printf("d. Hyper Transfer Protocol Secure\n");
    scanf(" %c",&w_ans[4]);    

    if (w_ans[0]=='d')
    {
        w_mark[0]=1;
    }
    if (w_ans[1]=='d')
    {
        w_mark[1]=1;
    }
    if (w_ans[2]=='c')
    {
        w_mark[2]=1;
    }
    if (w_ans[3]=='a')
    {
        w_mark[3]=1;
    }
    if (w_ans[4]=='a')
    {
        w_mark[4]=1;
    }
    printf("Your Marks as per question: \n");
    printf("1 = %d\n",w_mark[0]);
    printf("2 = %d\n",w_mark[1]);
    printf("3 = %d\n",w_mark[2]);
    printf("4 = %d\n",w_mark[3]);
    printf("5 = %d\n",w_mark[4]);
    tot_mark_w = w_mark[0] + w_mark[1] + w_mark[2] + w_mark[3] + w_mark[4];
    printf("\nYour Total Marks in Web Technology are %d",tot_mark_w);
    
    break;
        
    case 3:

    printf("\n1. Who is the father of Computers?\n");
    printf("a. James Gosling\n");
    printf("b. Charles Babbage\n");
    printf("c. Dennis Ritchie\n");
    printf("d. Bjarne Stroustrup\n");
    scanf(" %c",&b_ans[0]);
    
    printf("\n2. Which of the following is the correct abbreviation of COMPUTER?\n");
    printf("a. Commonly Occupied Machines Used in Technical and Educational Research\n");
    printf("b. Commonly Operated Machines Used in Technical and Environmental Research\n");
    printf("c. Commonly Oriented Machines Used in Technical and Educational Research\n");
    printf("d. Commonly Operated Machines Used in Technical and Educational Research\n");
    scanf(" %c",&b_ans[1]);

    printf("\n3. What is the full form of CPU?\n");
    printf("a. Computer Processing Unit\n");
    printf("b. Computer Principle Unit\n");
    printf("c. Central Processing Unit\n");
    printf("d. Control Processing Unit\n");
    scanf(" %c",&b_ans[2]);

    printf("\n4. Which of the following language does the computer understand?\n");
    printf("a. Computer understands only C Language\n");
    printf("b. Computer understands only Assembly Language\n");
    printf("c. Computer understands only Binary Language\n");
    printf("d. Computer understands only BASIC\n");
    scanf(" %c",&b_ans[3]);

    printf("\n5. Which of the following is the brain of the computer?\n");
    printf("a. Central Processing Unit\n");
    printf("b. Memory\n");
    printf("c. Arithmetic and Logic unit\n");
    printf("d. Control unit\n");
    scanf(" %c",&b_ans[4]);    

    if (b_ans[0]=='b')
    {
        b_mark[0]=1;
    }
    if (b_ans[1]=='d')
    {
        b_mark[1]=1;
    }
    if (b_ans[2]=='c')
    {
        b_mark[2]=1;
    }
    if (b_ans[3]=='a')
    {
        b_mark[3]=1;
    }
    if (b_ans[4]=='a')
    {
        b_mark[4]=1;
    }
    printf("Your Marks as per question: \n");
    printf("1 = %d\n",b_mark[0]);
    printf("2 = %d\n",b_mark[1]);
    printf("3 = %d\n",b_mark[2]);
    printf("4 = %d\n",b_mark[3]);
    printf("5 = %d\n",b_mark[4]);
    tot_mark_b = b_mark[0] +b_mark[1] + b_mark[2] + b_mark[3] + b_mark[4];
    printf("\nYour Total Marks in Basic of Computer System are %d",tot_mark_b);
    
        break;
        
        case 4:

    printf("\n1. Which number system has a base 16\n");
    printf("a. Hexadecimal\n");
    printf("b. Octal \n");
    printf("c. Binary \n");
    printf("d. Decimal\n");
    scanf(" %c",&d_ans[0]);
    
    printf("\n2. How many bits are needed to store one BCD digit?\n");
    printf("a. 2 bits\n");
    printf("b. 4 bits\n");
    printf("c. 3 bits\n");
    printf("d. 1 bit\n");
    scanf(" %c",&d_ans[1]);

    printf("\n3. Convert (312)8 into decimal\n");
    printf("a. (201)10\n");
    printf("b. (202)10\n");
    printf("c. (203)10\n");
    printf("d. (204)10\n");
    scanf(" %c",&d_ans[2]);

    printf("\n4. Which of these sets of logic gates are known as universal gates?\n");
    printf("a. XOR, NAND, OR\n");
    printf("b. OR, NOT, XOR\n");
    printf("c. NOR, NAND, XNOR\n");
    printf("d. NOR, NAND\n");
    scanf(" %c",&d_ans[3]);

    printf("\n5. 1's complement of 1011001 is\n");
    printf("a. 0100111\n");
    printf("b. 0101100\n");
    printf("c. 0100110\n");
    printf("d. 0110110\n");
    scanf(" %c",&d_ans[4]);    

    if (d_ans[0]=='a')
    {
        f_mark[0]=1;
    }
    if (d_ans[1]=='b')
    {
        f_mark[1]=1;
    }
    if (d_ans[2]=='b')
    {
        f_mark[2]=1;
    }
    if (d_ans[3]=='d')
    {
        f_mark[3]=1;
    }
    if (d_ans[4]=='c')
    {
        f_mark[4]=1;
    }
    printf("Your Marks as per question: \n");
    printf("1 = %d\n",f_mark[0]);
    printf("2 = %d\n",f_mark[1]);
    printf("3 = %d\n",f_mark[2]);
    printf("4 = %d\n",f_mark[3]);
    printf("5 = %d\n",f_mark[4]);
    tot_mark_f = f_mark[0] +f_mark[1] + f_mark[2] + f_mark[3] + f_mark[4];
    printf("\nYour Total Marks in Fundamentals of Digital Electronics are %d",tot_mark_f);
        break;

        default:
        printf("Enter corrct choice");
    }

    printf("\n\n\n\nDo you want to play again\n");
    printf("1. Play Again\n");
    printf("2.Exit\n");
    scanf("%d",&pagain);

    if (pagain==2)
    {   tot_score= tot_mark_b + tot_mark_c + tot_mark_f + tot_mark_w;
        printf("\n\n\nYour Total Score is %d",tot_score);
        break;
    }
    }
    
    return 0;
}


