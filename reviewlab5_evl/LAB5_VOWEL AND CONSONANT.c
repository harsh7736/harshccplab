

#include<stdio.h>
int main(){
    char ch;
    printf("enter the value of char:\n");
    scanf("%c",&ch);
    switch(ch){
        case 'a':
        case 'A':
        case'e':
        case'E':
        case'i':
        case'I': 
        case 'o':
        case'O':
        case'u':
        case'U':
        printf("the given character is a vowel");
        break;
        default:
        printf("the given character is a consonant");
        break;
    }return 0;
}