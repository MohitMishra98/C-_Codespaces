#include<stdio.h>

//WAP to get a character from user and check it is vowel or consonant (alternate)

void main() {
    char ch;

    printf("Enter a character :");
    scanf("%c",&ch);

    switch(ch) {
        case 'a' : 
        case 'e' : 
        case 'i' : 
        case 'o' : 
        case 'u' : printf("Vowel");
            break;
        default : printf("Consonant");
    }
}