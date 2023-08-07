#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int number,guess,nguess=1;

    srand(time(0));
    number = rand()%100+1;

    do{
        printf("Guess a number:  ");
        scanf("%d", &guess);
        if(guess<number)
        {
        printf("Higher number Please!\n");
        }
        else if (guess>number)
        {
        printf("Lower Number please!\n");
        }
        else
        {
        printf("You have guessed in %d attempts!", nguess);
        }
        nguess++;

    }while(guess!=number);



    return 0;
}