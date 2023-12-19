#include<stdio.h>

//WAP to get a character from user and check it is vowel or consonant

void main() {
    char ch;

    printf("Enter a character :");
    scanf("%c",&ch);

    switch(ch) {
        case 'a' : printf("Vowel");
            break;
        case 'e' : printf("Vowel");
            break;
        case 'i' : printf("Vowel");
            break;
        case 'o' : printf("Vowel");
            break;
        case 'u' : printf("Vowel");
            break;
        default : printf("Consonant");
    }
}