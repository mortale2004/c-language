#include<stdio.h>

int main(){
    char c;
    printf("Enter the first letter of word:  ");
    scanf("%c", &c);

    switch (c)
    {
        case 'a' :
        printf("This is a vowel");
        break;
        case 'e' :
        printf("This is a vowel");
        break;
        case 'i' :
        printf("This is a vowel");
        break;
        case 'o' :
        printf("This is a vowel");
        break;
        case 'u' :
        printf("This is a vowel");
        break;
        case 'A' :
        printf("This is a vowel");
        break;
        case 'E' :
        printf("This is a vowel");
        break;
        case 'I' :
        printf("This is a vowel");
        break;
        case 'O' :
        printf("This is a vowel");
        break;
        case 'U' :
        printf("This is a vowel");
        break;
        default :
        printf("This is a consonant");
        break;
        
    }
    return 0;
}